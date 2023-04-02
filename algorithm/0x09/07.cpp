#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));

    int n;
    int cnt=0, cnt1=0;
    queue<pair<int,int>> q,q1;

    cin >> n;


    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++){
            
            if(a[j] == 'R'){
                board[i][j] = 1;
            }
            else if(a[j] == 'G'){
                board[i][j] = 2;
            }
            else if(a[j] == 'B'){
                board[i][j] = 0;
            }
        }
    }
    
    
    for(int i=0; i<n; i++){  //적록색약이 아닐 때 
        for(int j=0; j<n; j++){
            if(vis[i][j] == 0 && board[i][j] ==2){
                vis[i][j] = 1;
                q.push({i,j});
                cnt++;
            }
            while(!q.empty()){ 
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 2) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }

    memset(vis,0,sizeof(vis));
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            if(vis[i][j] == 0 && board[i][j] ==1){
                vis[i][j] = 1;
                q.push({i,j});
                cnt++;
            }
            while(!q.empty()){ 
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }

    memset(vis,0,sizeof(vis));
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            if(vis[i][j] == 0 && board[i][j] ==0){
                vis[i][j] = 1;
                q.push({i,j});
                cnt++;
            }
            while(!q.empty()){ 
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }




    memset(vis,0,sizeof(vis));


    for(int i=0; i<n; i++){  //적록색약일 때는 0과 0이 아닌경우로 구분
        for(int j=0; j<n; j++){
            if(vis[i][j] == 0 && board[i][j] !=0){
                vis[i][j] = 1;
                q.push({i,j});
                cnt1++;
            }
            while(!q.empty()){ 
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] || board[nx][ny] == 0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }
    memset(vis,0,sizeof(vis));
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            if(vis[i][j] == 0 && board[i][j] ==0){
                vis[i][j] = 1;
                q.push({i,j});
                cnt1++;
            }
            while(!q.empty()){ 
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir = 0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }


    cout << cnt << " " << cnt1 << "\n";

}