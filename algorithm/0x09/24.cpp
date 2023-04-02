#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int vis[12][1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));
    int n,m,k;
    cin >> n >> m >> k;
    
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<m; j++){
            board[i][j] = a[j]-'0';
        }
    }

    if(n == 1 && m == 1){
        cout << 1 << "\n";
        return 0;
    }

    queue <tuple<int,int,int,int>> q;
    vis[0][0][0] = 1;
    q.push({0,0,0,0});

    while(!q.empty()){
        int flag = 0;
        tuple<int,int,int,int> cur = q.front();
        q.pop();
         
        if(get<1>(cur) == n-1 && get<2>(cur) == m-1){
            cout << get<3>(cur)+1 << "\n";
            return 0;
        }
        for(int dir=0; dir<4; dir++){ // 상하좌우로 4번 움직임
            int nx = get<1>(cur) + dx[dir];
            int ny = get<2>(cur) + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m ) continue; // 보드를 벗어나면 안함
            if(vis[get<0>(cur)][nx][ny]) continue; // 간적이 있는 칸이면 안함
            if(board[nx][ny] == 1 && (get<0>(cur) < k)){ // 벽이어도 k번만큼 안했으면 가고, 0번째 인자를 1 올려줌 vis도 1 올려줌
            
                if(get<3>(cur)%2==0){ // 낮이면 뿌셔!
                    if(vis[get<0>(cur)+1][nx][ny]) ; // 부수는게 더 느리면 안함
                    else{
                        vis[get<0>(cur)+1][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;
                        q.push({get<0>(cur)+1,nx,ny,get<3>(cur)+1});    
                        continue; // 푸시하고 컨티뉴
                    }
                }
                else{ //밤이면 가만히 있어!
                    q.push({get<0>(cur),get<1>(cur),get<2>(cur),get<3>(cur)+1});    
                }
            }
            if(board[nx][ny]) continue; // 더이상 못부수는 상황일때 벽이면 안함
            vis[get<0>(cur)][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1; // 거리 +1
            q.push({get<0>(cur),nx,ny,get<3>(cur)+1}); 
            
        }
        
        

    }

    cout << -1 << "\n";

}

//if-else문 위치 바꾸는데 깜빡하고 else문 안가져옴 ㅎㅎ;
