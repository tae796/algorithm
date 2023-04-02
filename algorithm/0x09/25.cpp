#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int vis[1002][1002];


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));
    int m,n,p;

    cin >> n >> m >> p;
    int cnt[p];

    for(int i=0; i<p; i++) cin >> cnt[i];

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        
        for(int j=0; j<m; j++){
            if(a[j] == '1') board[i][j] = 1;
            else if(a[j] == '2') board[i][j] = 2;
            else if(a[j] == '3') board[i][j] = 3;
            else if(a[j] == '4') board[i][j] = 4;
            else if(a[j] == '5') board[i][j] = 5;
            else if(a[j] == '6') board[i][j] = 6;
            else if(a[j] == '7') board[i][j] = 7;
            else if(a[j] == '8') board[i][j] = 8;
            else if(a[j] == '9') board[i][j] = 9;
            else if(a[j] == '.') board[i][j] = 10; //빈칸은 10
            else if(a[j] == '#') board[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << board[i][j] <<" ";
        cout << "\n";
    }


    queue<pair<int,int>> q;
    
    for(int i=0; i<n; i++){ //반복문을 돌리는게 아니라, 좌표 있는곳 딱딱 찝어주면서 돌려야하네요 어떻게 그걸 해줄까요?
        for(int j=0; j<m; j++){
            int player = 0;
            if(vis[i][j]==0 && board[i][j] !=0 && board[i][j] !=10){
                vis[i][j] = board[i][j];
                q.push({i,j});
                player = board[i][j];
            }
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[nx][ny]) continue;
                    if(board[nx][ny] !=10) continue;
                    vis[nx][ny] = vis[cur.X][cur.Y];
                    q.push({nx,ny});
                }
            }

        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << vis[i][j] <<" ";
        cout << "\n";
    }
    

}