#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int board[1005][1005];
int vis[1005][1005];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> q;
pair<int,int> st;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 2) {
                q.push({i,j});
                vis[i][j] = 0;
                st = {i,j};
            }
        }
    }

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx>=n || nx<0 || ny>=m || ny<0) continue;
            if(vis[nx][ny]) continue;
            if(board[nx][ny] == 0) {
                vis[nx][ny] = -3;
                continue;
            }
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            q.push({nx,ny});
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vis[i][j] == 0) vis[i][j] = -1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 0) vis[i][j] = 0;
            if(board[i][j] == 2) vis[i][j] = 0;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << vis[i][j] << " ";
        }
        cout << "\n";
    }
}