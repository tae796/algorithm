#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int vis[2][1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m ;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<m; j++){
            if(a[j] == '1') board[i][j] = 1;
            else board[i][j] = 0;
        }
    }

    if(n==1 && m==1){
        cout << 1 << "\n";
        return 0;
    }


    memset(vis,0,sizeof(vis));
    queue<tuple<int,int,int>> q;
    int flag = 0;
    vis[0][0][0] = 1;
    q.push({0,0,0});
    while(!q.empty()){
        tuple<int,int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[get<2>(cur)][nx][ny] ) continue;
            if(board[nx][ny] == 1 && get<2>(cur) == 1) continue;
            if(board[nx][ny] == 1 && get<2>(cur) == 0) {
                q.push({nx,ny,1});
                vis[1][nx][ny] = vis[0][get<0>(cur)][get<1>(cur)]+1;        
                continue;
            }
            if(nx == n-1 && ny == m-1){
                cout << vis[get<2>(cur)][get<0>(cur)][get<1>(cur)]+1 << "\n";
                return 0;
            }
            vis[get<2>(cur)][nx][ny] = vis[get<2>(cur)][get<0>(cur)][get<1>(cur)]+1;

            q.push({nx,ny,get<2>(cur)});
        }
    }

    cout << -1 << "\n";


}


//1. 첫번째 제출은 수정했는데 수정이 안된 상태로 제출이 됨 이유는 모르겠음
//2. 시간초과(연산 10억개정도면 괜찮을줄 알았음)
//3. 출력초과(디버깅용도로 해놓은코드 같이제출)
//4. vis에 값이 존재할 경우도 가야하는데 가지 않음 -> vis를 2개로 나누어서 해결
//5. 3과같음