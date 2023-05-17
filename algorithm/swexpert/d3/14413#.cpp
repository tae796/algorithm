#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[52][52];
int vis[52][52];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    queue<pair<int,int>> q;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<m; j++){
            if(a[j] == '#') {
                board[i][j] = 1;
                q.push({i,j});
            }
            else if(a[j] == '.') {
                board[i][j] = 2;
                q.push({i,j});
            }
            else board[i][j] =0;
        }
    }




    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();

        vis[cur.X][cur.Y] = 1;
        int mode = 1;
        if(board[cur.X][cur.Y] == 1) mode = 1;
        else mode = 2;

        int flag = 1;
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(vis[nx][ny]) continue;
            if(mode == 1){
                if(board[nx][ny] == 1) flag = 0;
                if(board[nx][ny] == 0) board[nx][ny] = 2;
            }
            if(mode == 2){
                if(board[nx][ny] == 2) flag = 0;
                if(board[nx][ny] == 0) board[nx][ny] = 1;
            }
            vis[nx][ny] = 1;
            q.push({nx,ny});
        }

        if(flag == 0) break;

    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }


    int flag = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            if(board[i][j] == 0)cnt++;
            for(int dir=0; dir<4; dir++){
            int nx = i + dx[dir];
            int ny = j + dy[dir];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(board[i][j] == board[nx][ny]) flag = 0;
            if(board[nx][ny] == 0) flag = 0;
        }
        }
    }

    if(cnt == n*m) flag = 1;

    if(flag ==1) cout << "possible" << "\n";
    else cout << "impossible" << "\n";
    

}
