#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[6][6][6];
int board2[6][6][6];
int vis[6][6][6];
bool isused[6];
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};
int cnt = 0;
int ans = 500;


queue<tuple<int,int,int>> q;
void rotate(int k,int a,int type){
    if(type == 1){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                board2[k][j][4-i] = board[a][i][j];
            }
        }
    }
    else if(type == 2){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                board2[k][4-i][4-j] = board[a][i][j];
            }
        }
    }
    else if(type == 3){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                board2[k][4-j][i] = board[a][i][j];
            }
        }
    }
    
}
void func(int k){
    if(ans == 12) return ;
    if(k==5){ // bfs;
        for(int i=0; i<8; i++){
            int flag = 0;
            memset(vis,0,sizeof(vis));
            int dist = 0;
            if(i==0){
                if(vis[0][0][0] == 0 && board2[0][0][0] == 1){
                    if(board2[4][4][4] == 0) continue;
                    vis[0][0][0] = 1;
                    q.push({0,0,0});
                }
            }
            else if(i==1){
                if(vis[0][0][4] == 0 && board2[0][0][4] == 1){
                    if(board2[4][4][0] == 0) continue;
                    vis[0][0][4] = 1;
                    q.push({0,0,4});
                }
            }
            else if(i==2){
                if(vis[0][4][0] == 0 && board2[0][4][0] == 1){
                    if(board2[4][0][4] == 0) continue;
                    vis[0][4][0] = 1;
                    q.push({0,4,0});
                }
            }
            else if(i==3){
                if(vis[0][4][4] == 0 && board2[0][4][4] == 1){
                    if(board2[4][0][0] == 0) continue;
                    vis[0][4][4] = 1;
                    q.push({0,4,4});
                }
            }
            else if(i==4){
                if(vis[4][0][0] == 0 && board2[4][0][0] == 1){
                    if(board2[0][4][4] == 0) continue;
                    vis[4][0][0] = 1;
                    q.push({4,0,0});
                }
            }
            else if(i==5){
                if(vis[4][0][4] == 0 && board2[4][0][4] == 1){
                    if(board2[0][4][0] == 0) continue;
                    vis[4][0][4] = 1;
                    q.push({4,0,4});
                }
            }
            else if(i==6){
                if(vis[4][4][0] == 0 && board2[4][4][0] == 1){
                    if(board2[0][0][4] == 0) continue;
                    vis[4][4][0] = 1;
                    q.push({4,4,0});
                }
            }
            else if(i==7){
                if(vis[4][4][4] == 0 && board2[4][4][4] == 1){
                    if(board2[0][0][0] == 0) continue;
                    vis[4][4][4] = 1;
                    q.push({4,4,4});
                }
            }
            while(!q.empty()){
                int x,y,z;
                tie(z,x,y) = q.front();
                q.pop();
                for(int dir=0; dir<6; dir++){
                    int nz = z + dz[dir];
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];
                    if(nz<0 || nz>=5 || nx<0 || nx>=5 || ny<0 || ny>=5) continue;
                    if(vis[nz][nx][ny] || board2[nz][nx][ny] == 0) continue;
                    if(i == 0 && nz == 4 && nx == 4 && ny == 4){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    
                    }
                    if(i == 1 && nz == 4 && nx == 4 && ny == 0){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 2 && nz == 4 && nx == 0 && ny == 4){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 3 && nz == 4 && nx == 0 && ny == 0){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 4 && nz == 0 && nx == 4 && ny == 4){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 5 && nz == 0 && nx == 4 && ny == 0){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 6 && nz == 0 && nx == 0 && ny == 4){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                    }
                    if(i == 7 && nz == 0 && nx == 0 && ny == 0){
                        dist = vis[z][x][y];
                        flag = 1;
                        continue;
                        
                    }
                    vis[nz][nx][ny] = vis[z][x][y]+1;
                    q.push({nz,nx,ny});
                }
            }
            if(flag) {
                ans = min(ans,dist);
            }
            
        }
        return ;
    }
    
    for(int a=0; a<5; a++){
        if(!isused[a]){
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    board2[k][i][j] = board[a][i][j];
                }
            }
            isused[a] = 1;
            func(k+1);
            isused[a] = 0;
            rotate(k,a,1);
            isused[a] = 1;
            func(k+1);
            isused[a] = 0;
            rotate(k,a,2);
            isused[a] = 1;
            func(k+1);
            isused[a] = 0;
            rotate(k,a,3);
            isused[a] = 1;
            func(k+1);
            isused[a] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int k=0; k<5; k++){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++) cin >> board[k][i][j];
        }
    }

    func(0);

    if(ans == 500) cout << -1 << "\n";
    else cout << ans << "\n";



}