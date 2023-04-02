#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second



int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    
    for(int l=0; l<a; l++){
        int board[52][52];
        int vis[52][52];
        memset(board,0,sizeof(board));
        memset(vis,0,sizeof(vis));
        int cnt = 0;
        int n,m,k;
        cin >> m >> n >> k;
        queue<pair<int,int>> q1;
        for(int i=0; i<k; i++){
            int b,c;
            cin >> b >> c;
            q1.push({c,b});
            board[c][b] = 1;
        }

        queue<pair<int,int>> q;

        for(int i=0; i<k; i++){

            if(vis[q1.front().X][q1.front().Y] == 0 && board[q1.front().X][q1.front().Y] == 1){
                vis[q1.front().X][q1.front().Y] = 1;
                q.push(q1.front());
                //cout << "(" << q1.front().X << "," << q1.front().Y << ") -> ";
                q1.pop();
                
                cnt++;
            }
            else q1.pop();
            
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir =0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
            
        }
        cout << cnt << "\n";
    }
    

}

// board와 vis를 전역변수로 선언해서 2번째 들어올때부터는 제대로 동작하지 않음
// board와 vis를 memset으로 초기화할것 (문제가 없을것이라 생각했으나 board에 1이 들어가는 경우에 문제가 생길 수 있음)