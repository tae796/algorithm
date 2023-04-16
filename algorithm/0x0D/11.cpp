#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
int n,k,l,d=0;
int ans=0, len=1;
queue<pair<int,char>> info;
queue<pair<int,int>> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;

    while(k--){
        int x,y;
        cin >> x >> y;
        board[x-1][y-1] = 1;
    }
    
    cin >> l;
    while(l--){
        int x;
        char y;
        cin >> x >> y;
        info.push({x,y});
    }


    vis[0][0] = 1;
    q.push({0,0});

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        if(ans == info.front().X){
            if(info.front().Y == 'D') d= (d+3)%4;
            else d = (d+1)%4;
            info.pop();
        }
        int nx = cur.X + dx[d];
        int ny = cur.Y + dy[d];
        if(board[nx][ny] == 1) {
            len++;
            board[nx][ny] =0;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j] <= ans-len+1) vis[i][j] = 0;
            }
        }
        if(nx<0 || nx>=n || ny<0 || ny>=n || vis[nx][ny]) break;
        vis[nx][ny] = vis[cur.X][cur.Y]+1;
        q.push({nx,ny});
        ans++;
        
    }

    cout << ans+1 << "\n";


}

// 사과를 먹었으면 지워야하는데 지우지 않음