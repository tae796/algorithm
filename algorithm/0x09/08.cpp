#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int board[102][102][102];
int vis[102][102][102];
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m,n,h;
    int zero=0, cnt=0, flag=0;
    cin >> m >> n >> h;

    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin >> board[i][j][k];
                if(board[i][j][k] == 0) zero++;
            }
        }
    }
    if(zero==0){
        cout << 0 << "\n";
        return 0;
    }
    queue<tuple<int,int,int>> q;


    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(vis[i][j][k] == 0 && board[i][j][k] == 1){
                vis[i][j][k] = 1;
                q.push({i,j,k});
                
                }
                

            }
        }
    }
    while(!q.empty()){
        tuple<int,int,int> cur = q.front();
        q.pop();
        
        for(int dir=0; dir<6; dir++){
            int nz = get<0>(cur) + dz[dir];
            int nx = get<1>(cur) + dx[dir];
            int ny = get<2>(cur) + dy[dir];
            
            if(nx<0 || nx>=n || ny<0 || ny>=m || nz<0 || nz>=h) continue;
            if(vis[nz][nx][ny] || board[nz][nx][ny] == -1) continue;
            vis[nz][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;
            q.push({nz,nx,ny});

        }
    }


    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(vis[i][j][k] == 0 && board[i][j][k] != -1) flag = 1;
            }
        }
    }
    int ans=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                ans = max(ans,vis[i][j][k]);
            }
        }
    }


    if(flag == 1) cout << -1 << "\n";
    else cout << ans-1 << "\n";

    
    
}


//1. BFS를 반복문 밖에서 돌려야하는데 안에서 돌림 -> 차이점 명확하게 알아둘 것
//2. 테스트 해보려고 넣은 출력문을 같이 넣어버림ㅎㅎ;