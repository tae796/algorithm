#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[15][10];
int vis[15][10];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> q;
int ans = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<12;i++){
        string a;
        cin >> a;
        for(int j=0; j<6; j++){
            char tmp;
            tmp = a[j];
            if(tmp== '.') board[i][j] = 0;
            else if(tmp=='R') board[i][j] = 1;
            else if(tmp=='G') board[i][j] = 2;
            else if(tmp=='B') board[i][j] = 3;
            else if(tmp=='P') board[i][j] = 4;
            else if(tmp=='Y') board[i][j] = 5;
        } 
    }
    bool check = 1;
    while(check){
        check = 0;
        for(int i=0; i<12; i++){
            for(int j=0; j<6; j++){
                memset(vis,0,sizeof(vis));
                vector<pair<int,int>> v;
                int area = 0;
                if(vis[i][j]==0 && board[i][j]>0){
                    vis[i][j] = 1;
                    q.push({i,j});
                    v.push_back({i,j});
                }
                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx<0 || nx>=12 || ny<0 || ny>=6) continue;
                        if(vis[nx][ny] || board[i][j]!= board[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                        v.push_back({nx,ny});
                    }
                }
                if(v.size()>=4){
                    for(int i=0; i<v.size(); i++) board[v[i].X][v[i].Y] = 0;
                    v.clear();
                    if(check) ;
                    else {
                        check = 1;
                        ans++;
                    }
                    
                }
            }
        }
        int bot[12];
        memset(bot,0,sizeof(bot));
        for(int i=11;i>=0;i--){
            for(int j=0; j<6; j++){
                if(board[i][j] == 0){
                    bot[j] = max(bot[j],i);
                    continue;
                }
                if(bot[j] !=0 && board[bot[j]][j] == 0){
                    board[bot[j]][j] = board[i][j];
                    bot[j]--;
                    board[i][j] = 0;
                }
            }
        }
    }


    cout << ans << "\n";



}