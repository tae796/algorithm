#include <bits/stdc++.h>
using namespace std;

int board[32][32][32];
int vis[32][32][32];
int dz[6] = {0,0,0,0,1,-1};
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        int n,m,h;
        int flag = 0;
        queue<tuple<int,int,int>> q;
        memset(board,0,sizeof(board));
        memset(vis,0,sizeof(vis));
        cin >> h >> n >> m;
        if(h==0 && n==0 && m==0) return 0;


        for(int i=0; i<h; i++){
            for(int j=0; j<n; j++){
                string a;
                cin >> a;
                for(int k=0; k<m; k++){
                    if(a[k] == 'S'){
                        board[i][j][k] = 2;
                        vis[i][j][k] = 1;
                        q.push({i,j,k});
                    }
                    else if(a[k] =='E'){
                        board[i][j][k] = 3;
                    }
                    else if(a[k] =='.') board[i][j][k] = 1;
                    else if(a[k] =='#') board[i][j][k] = 0;
                }
            }
        }


        while(!q.empty()){
            tuple<int,int,int> cur = q.front();
            q.pop();
            for(int dir=0; dir<6; dir++){
                int nz = get<0>(cur) + dz[dir];
                int nx = get<1>(cur) + dx[dir];
                int ny = get<2>(cur) + dy[dir];
                if(nz<0 || nz>=h || nx<0 || nx>=n || ny<0 || ny>=m) continue;
                if(board[nz][nx][ny] == 3){
                    cout << "Escaped in " << vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] << " minute(s).\n";
                    flag = 1;
                    break;
                }
                if(vis[nz][nx][ny] || board[nz][nx][ny] != 1 ) continue;
                vis[nz][nx][ny] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;
                q.push({nz,nx,ny});
            }
            if(flag) break;
        }
        
        if(flag == 0 ) cout << "Trapped!" << "\n";
    }
    

}

//1. board와 vis를 초기화하지않았음. 반드시 초기화할것