#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[52][52];
int vis[52][52];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int n,m,x,y,d;
int ans = 0;
queue<pair<int,int>> q;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> x >> y >> d;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> board[i][j];
    }

    vis[x][y] = 1;
    ans++;
    q.push({x,y});
    
    while(!q.empty()){
        int clear = 0;
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0|| nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] || board[nx][ny] == 1) continue;
            clear = 1;
        }
        if(clear){
            d = (d+3)%4;
            int nx = cur.X + dx[d];
            int ny = cur.Y + dy[d];
            if(nx<0|| nx>=n || ny<0 || ny>=m || vis[nx][ny] || board[nx][ny] == 1) q.push({cur.X,cur.Y});
            else {
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
                q.push({nx,ny});
                ans++;
            }
        }
        else{
            int tmp = (d+2)%4;
            int nx = cur.X + dx[tmp];
            int ny = cur.Y + dy[tmp];
            if(nx<0|| nx>=n || ny<0 || ny>=m || board[nx][ny] == 1){
                break;
            }
            else{
                q.push({nx,ny});
            }
            
        }
        
    }

    cout << ans << "\n";

}