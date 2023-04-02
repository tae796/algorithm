#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int vis[1002][1002] = {0};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    int cnt = 0;
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 0) cnt++;
        }
    }
    if(cnt == 0){
        cout << 0 << "\n";
        return 0;
    }

    queue<pair<int,int>> q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 1 && vis[i][j] == 0){
                vis[i][j] = 1;
                q.push({i,j});
            }
           
        }
    }
    while(!q.empty()){
            pair<int,int> cur = q.front();
            q.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                if(vis[nx][ny] || board[nx][ny] == -1) continue;
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
                q.push({nx,ny});
            }
        }

    int max = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vis[i][j] == 0 && board[i][j] != -1){
                cout << -1 << "\n";
                return 0;
            }
            if(i ==0 && j == 0) max = vis[i][j];
            else{
                if(max < vis[i][j]) max = vis[i][j];
            }
        }
    }

    cout << max-1 << "\n";

    


}


//제발 max좀 공부하고 써라!!
//다시 보니까 안써도 될듯?
