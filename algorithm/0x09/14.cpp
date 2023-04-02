#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h;
    int ans = 0;
    int h_max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            h_max = max(h_max,board[i][j]);
        }
    }

    for(int h=0; h<=h_max; h++){
        
        queue<pair<int,int>> q;
        int tmp[102][102];
        int cnt = 0;
        memset(tmp,0,sizeof(tmp));
        memset(vis,0,sizeof(vis));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] <= h) tmp[i][j] = 0;
                else tmp[i][j] = 1;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j] == 0 && tmp[i][j] == 1){
                    vis[i][j] = 1;
                    q.push({i,j});
                    cnt++;
                }
                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                        if(vis[nx][ny] || tmp[nx][ny] !=1) continue;
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        ans = max(ans,cnt);
    }   

    cout << ans << "\n"; 


}

//1. 높이의 최댓값이 100인데 n으로 설정하고 풀어서 해당 부분 수정
//2. 높이의 최솟값을 0이 아닌 1로 설정하고 풀었음 (문제에서 주어지는 h값의 범위는 지역의 범위다)