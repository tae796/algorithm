#include <bits/stdc++.h>
using namespace std;

int board[202][202];
int vis[2][202][202];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int hx[8] = {2,1,-1,-2,-2,-1,1,2};
int hy[8] = {1,2,2,1,-1,-2,-2,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,jump;
    int board[202][202];
    memset(vis,0,sizeof(vis));
    cin >> jump >> m >> n;

    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> board[i][j];
    }

    if(m==1 && n==1) {
        cout << 0 <<"\n";
        return 0;
    }

    queue<tuple<int,int,int>> q;
    vis[0][0][0] = 1;
    q.push({0,0,0});

    while(!q.empty()){
        int tmp = 0;
        tuple<int,int,int> cur = q.front();
        q.pop();
        if(get<2>(cur) >= 1) tmp = 1;
        for(int dir=0; dir<4; dir++){
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[tmp][nx][ny] ) continue;
            if(board[nx][ny] == 1 && get<2>(cur) == jump) continue;
            if(get<2>(cur) < jump) {
                for(int dir2=0; dir2<8; dir2++){
                    int ax = get<0>(cur) + hx[dir2];
                    int ay = get<1>(cur) + hy[dir2];
                    if(ax<0 || ax>=n || ay<0 || ay>=m) continue;
                    if(vis[tmp][ax][ay]) continue;
                    if(board[ax][ay] == 1) continue;
                    if(ax == n-1 && ay == m-1){

                        // cout << "\n";
                        // for(int i=0; i<n; i++){
                        //     for(int j=0; j<m; j++){
                        //         cout << vis[0][i][j] << " ";
                        //     }
                        //     cout << "\n";
                        // }
                        // cout << "\n";
                        // for(int i=0; i<n; i++){
                        //     for(int j=0; j<m; j++){
                        //         cout << vis[1][i][j] << " ";
                        //     }
                        //     cout << "\n";
                        // }


                        cout << vis[tmp][get<0>(cur)][get<1>(cur)] << "\n";
                        return 0;
                    }
                    vis[1][ax][ay] = vis[0][get<0>(cur)][get<1>(cur)]+1;
                    vis[0][ax][ay] = vis[1][ax][ay];
                    q.push({ax,ay,get<2>(cur)+1});
                }
            }
            if(board[nx][ny] == 1) continue;
            if(nx == n-1 && ny == m-1){

                // cout << "\n";
                // for(int i=0; i<n; i++){
                //     for(int j=0; j<m; j++){
                //         cout << vis[0][i][j] << " ";
                //     }
                //     cout << "\n";
                // }
                // cout << "\n";
                // for(int i=0; i<n; i++){
                //     for(int j=0; j<m; j++){
                //         cout << vis[1][i][j] << " ";
                //     }
                //     cout << "\n";
                // }

                cout << vis[tmp][get<0>(cur)][get<1>(cur)] << "\n";
                return 0;
            }

            vis[tmp][nx][ny] = vis[tmp][get<0>(cur)][get<1>(cur)]+1;
            vis[0][nx][ny] = vis[tmp][nx][ny];
            q.push({nx,ny,get<2>(cur)});
        }     
    }

    cout << -1 << "\n";

}



// 무조건 점프를 먼저하게 되어있는데 그러면 안됨
/* 반례
1
5 5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 1 1
0 0 0 1 0

*/