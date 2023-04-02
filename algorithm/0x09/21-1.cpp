#include <bits/stdc++.h>
using namespace std;

int board[202][202];
bool vis[31][202][202];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int hx[8] = {2,1,-1,-2,-2,-1,1,2};
int hy[8] = {1,2,2,1,-1,-2,-2,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,jump;
    int cnt = 0;    
    cin >> jump >> m >> n;
    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> board[i][j];
    }
    
    memset(vis,0,sizeof(vis));
    if(m==1 && n==1) {
        cout << 0 <<"\n";
        return 0;
    }

    queue<tuple<int,int,int,int>> q;
    vis[0][0][0] = 1;
    q.push({0,0,0,0});

    while(!q.empty()){
        tuple<int,int,int,int> cur = q.front();
        q.pop();
        int j_cnt = get<2>(cur);
        if(j_cnt < jump){ //점프가 가능한 경우
            for(int dir=0; dir<12; dir++){
                int nx,ny;
                if(dir<4){ //점프 안하는 경우
                    nx = get<0>(cur) + dx[dir];
                    ny = get<1>(cur) + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[j_cnt][nx][ny] || board[nx][ny] != 0) continue;
                    //if(board[nx][ny] != 0) continue;
                    if(nx == n-1 && ny == m-1){
                        cout << get<3>(cur)+1 << "\n";
                        return 0;
                    }
                    vis[j_cnt][nx][ny] = 1;
                    q.push({nx,ny,j_cnt,get<3>(cur)+1});
                }
                else{ //점프 하는 경우
                    nx = get<0>(cur) + hx[dir-4];
                    ny = get<1>(cur) + hy[dir-4];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[j_cnt+1][nx][ny] || board[nx][ny] != 0) continue;
                    //if(board[nx][ny] != 0) continue;
                    if(nx == n-1 && ny == m-1){
                 
                        cout << get<3>(cur)+1 << "\n";
                        return 0;
                    }
                    vis[j_cnt+1][nx][ny] = 1;
                    q.push({nx,ny,j_cnt+1,get<3>(cur)+1});
                    

                }
            }
        }
        else{//점프가 불가능한 경우
            for(int dir=0; dir<4; dir++){
                int nx = get<0>(cur) + dx[dir];
                int ny = get<1>(cur) + dy[dir];
                if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(vis[j_cnt][nx][ny] || board[nx][ny] != 0) continue;
                    //if(board[nx][ny] != 0) continue;
                    if(nx == n-1 && ny == m-1){

                        cout << get<3>(cur)+1 << "\n";
                        return 0;
                    }
                    vis[j_cnt][nx][ny] = 1;
                    q.push({nx,ny,j_cnt,get<3>(cur)+1});
    
            }
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

//2. 메모리 초과
//3. 게시판에 있는걸 보면서 고치긴 했는데 사실 아직도 이유를 모르겠음 