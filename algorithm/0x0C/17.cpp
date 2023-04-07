#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int board[6][6];
int vis[6][6];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue <pair<int,int>> q;

int s[25];
int arr[25];
int ans[7];
int total=0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int b=0,c=0;
    for(int i=0; i<5; i++){
        string a;
        cin >> a;
        for(int j=0; j<5; j++) {
            if(a[j]=='S') s[c++] = i*5+j;       
            arr[b++] = i*5+j;
        }
    }

    int a[25] = {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        do{
            memset(board,0,sizeof(board));
            memset(vis,0,sizeof(vis));
            int aa=0;
            int cnt=0;
            for(int i=0;i<25;i++){
                if(a[i] == 0) ans[aa++] = arr[i];
            }
            for(int i=0; i<7;i++){
                for(int j=0; j<c; j++){
                    if(s[j] == ans[i]) cnt++; 
                }
            }

            if(cnt<4) continue;
            for(int i=0; i<7; i++) board[ans[i]/5][ans[i]%5] = 1;


            int area=0;
            int x = ans[0]/5;
            int y = ans[0]%5;
            vis[x][y] = 1;
            q.push({x,y});
            area++;
            while(!q.empty()){
                pair<int,int> cur = q.front();
                q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=5 || ny<0 || ny>=5) continue;
                    if(board[nx][ny] == 0 || vis[nx][ny]) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                    area++;
                }
            }


            if(area == 7) total++;
        
            

        }while(next_permutation(a,a+25));
    

        cout << total << "\n";
    

}


// 1.bfs 넓이 개념으로 접근을 했는데 get<2>가 현재까지의 거리라서 구현을 제대로 못함.
// 순수 백트래킹으로 구현해봤는데 시간초과가 무조건 뜰거같음 (arr가 25개라서)
// bfs로 할 때 벽으로 막고 싶은데 어떻게 막아야할지 몰라서 헤메다가 질문게시판에서 힌트를 얻음 (조합을 짜고-> bfs 돌리기) 