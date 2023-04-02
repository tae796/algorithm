#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];
int dist[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans = 200;
    cin >> n;
    queue<pair<int,int>> q,edge;
    memset(board,0,sizeof(board));


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }
    
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            memset(vis,0,sizeof(vis));
            int flag = 0;
            if(vis[i][j] == 0 && board[i][j] == 1){
                vis[i][j] = 1;
                q.push({i,j});
                flag = 1;
            }
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(dist[nx][ny] == 0 && board[nx][ny] == 0){
                            edge.push({nx,ny});
                            dist[nx][ny] = 1;
                        
                    }
                    if(vis[nx][ny] || board[nx][ny] !=1) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }

            memset(dist,0,sizeof(dist));
            while(!edge.empty()){
                pair<int,int> cur = edge.front();
                edge.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] == 1 || dist[nx][ny]>0) continue;
                    if(board[nx][ny] == 1) {
                        ans = min(ans,dist[cur.X][cur.Y]+1);
                    }
                    dist[nx][ny] = dist[cur.X][cur.Y]+1;
                    edge.push({nx,ny});
                }
            }

        }
    }

    
    cout << ans << "\n";
}




//1. 
/* 반례
5
1 1 1 0 0
1 0 1 0 0
1 1 1 0 0
0 0 0 0 0
0 0 0 0 1
*/

//2. vis를 왜 초기화 시켜야 하는걸까? 맞았는데 이유를 고민해봐야할 것 같다.