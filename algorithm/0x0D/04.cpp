#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[60][60];
int vis[60][60];
bool check[60][60];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int n, k;
int cnt=0;
int ans = 1000000;
vector<pair<int,int>> v,v1;
queue<pair<int,int>> q;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) v.push_back({i,j});
            else if(board[i][j] == 2) {
                cnt++;
                v1.push_back({i,j});
            }
        }
    }

    int arr[cnt];
    fill(arr,arr+cnt,1);
    fill(arr,arr+cnt-k,0);




    do{
        int tot=0;
        int tmp[60][60];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                tmp[i][j] = board[i][j];
            }
        }


        memset(vis,0,sizeof(vis));
        memset(check,0,sizeof(check));
        int sum =0;
        for(int i=0; i<cnt; i++){
            if(arr[i] == 0) tmp[v1[i].X][v1[i].Y] = 0;
            else if(arr[i] == 1){
                q.push({v1[i].X,v1[i].Y});
                vis[v1[i].X][v1[i].Y] = 1;
            }
        }

        while(!q.empty()){
            int x,y;
            tie(x,y) = q.front();
            q.pop();
            for(int dir=0; dir<4; dir++){
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                if(vis[nx][ny]) continue;
                if(tmp[nx][ny] == 1 && check[nx][ny]==0){
                    sum += vis[x][y];
                    check[nx][ny] = 1;
                }
                vis[nx][ny] = vis[x][y]+1;
                q.push({nx,ny});
            }
        }

        ans = min(ans,sum);


    }while(next_permutation(arr,arr+cnt));
    
    cout << ans << "\n";    

    

}



//bfs를 집 기준으로 돌리니 시간초과 남 -> 치킨집 기준으로 해보겠음(사실 치킨집으로 하려다가 구현이 애매해서 집 기준으로 했음)