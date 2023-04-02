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
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));

    int m,n,k;

    cin >> n >> m >> k;

    while(k--){
        int sx,sy,ex,ey;
        cin >> sy >> sx >> ey >> ex;
        for(int i=sx; i<ex; i++){
            for(int j=sy; j<ey; j++){
                board[i][j]++; 
            }
        }
    }
    
    
    queue<pair<int,int>> q;
    vector<int> v;
    vector<int>::iterator iter;
    int cnt = 0;

    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            int flag = 0;
            int area = 0;
            if(vis[i][j] == 0 && board[i][j] == 0){
                vis[i][j] = 1;
                q.push({i,j});
                area++;
                cnt++;
                flag = 1;
            }
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[nx][ny] || board[nx][ny] !=0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                    area++;
                }
            }
            if(flag) v.push_back(area);

        }
    }

    cout << cnt << "\n";

    sort(v.begin(),v.end());
    for(iter = v.begin(); iter<v.end(); iter++)
        cout << *(iter) << " ";

}