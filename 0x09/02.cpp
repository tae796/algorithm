#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102] = {0};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0;j<m; j++){
            board[i][j] = a[j]-'0';
        }
    }

    queue<pair<int,int>> q,q1;
    q.push({0,0});
    vis[0][0] = 1;
    int len = 1;
    while(!q.empty()){ 
        int flag = 0;
        pair<int,int> cur = q.front(); q.pop();
        for(int dir =0; dir<4; dir ++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(board[nx][ny] != 1 || vis[nx][ny]) continue;
            
            vis[nx][ny] = vis[cur.X][cur.Y]+1;
            q.push({nx,ny});
        }

    }

    cout << vis[n-1][m-1];


}

//그냥 이상하게 해서 틀림