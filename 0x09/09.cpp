#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        int board[302][302];
        int vis[302][302];
        memset(board,0,sizeof(board));
        memset(vis,0,sizeof(vis));
        int n,st_x,st_y,en_x,en_y;
        int flag = 0;
        cin >> n >> st_x >>st_y >>en_x >>en_y;
        if(st_x == en_x && st_y == en_y){
            cout << 0 <<"\n";
            continue;
        }
        queue<pair<int,int>> q;
        vis[st_x][st_y] = 1;
        q.push({st_x,st_y});
        

        while(!q.empty()){
            pair<int,int> cur = q.front();
            q.pop();
            for(int dir=0; dir<8; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                if(vis[nx][ny]) continue;
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
                q.push({nx,ny});
                if(nx == en_x && ny == en_y){
                    cout << vis[nx][ny]-1 << "\n";
                    flag = 1;
                }
            }
            if(flag == 1) break;
        }
    }

}