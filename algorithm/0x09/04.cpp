#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int vis[1002][1002] = {0};
int vis1[1002][1002] = {0};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    pair<int,int> jihun;
    queue<pair<int,int>> q;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<m; j++){
            if(a[j] == '#') board[i][j] = 0;
            else if(a[j] == 'J') {
                board[i][j] = -1;
                jihun = {i,j};
                vis[jihun.X][jihun.Y] = 1;
            }
            else if(a[j] == 'F') {
                board[i][j] = -2;
                q.push({i,j});
                vis[i][j] = -1;
                }
            else if(a[j] == '.') board[i][j] = 1;
        }
    }

    q.push(jihun);
    


    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            if(vis[cur.X][cur.Y] == -1) vis[nx][ny] = -1;
            else vis[nx][ny] = vis[cur.X][cur.Y]+1;

            q.push({nx,ny});
        }
    } 


    int flag=0;
    int ans = 1000001;
    for(int i=0; i<m; i++){
        if(vis[0][i] > 0) {
            flag =1;
            ans = min(ans,vis[0][i]);
        }
        if(vis[n-1][i] > 0) {
            flag = 1;
            ans = min(ans,vis[n-1][i]);
        }
    }

    for(int i=0; i<n; i++){
        if(vis[i][0] > 0) {
            flag =1;
            ans = min(ans,vis[i][0]);
        }
        if(vis[i][m-1] > 0) {
            flag = 1;
            ans = min(ans,vis[i][m-1]);
        }
    }

    if(flag == 0) cout << "IMPOSSIBLE" << "\n";
    else{
        cout << ans << "\n";
    }




}


//1. 미로에 불이 여러개일 수 있다는걸 몰랐음
//2. 알았는데 코드 깔끔하게 수정하려다가 실수함 (지훈을 불보다 앞에 넣으면 안되는데 깔끔하게 하려다가 앞에 넣음)