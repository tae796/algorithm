#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[302][302];
int m_board[302][302];
int vis[302][302];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;

void melt(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j]>0){
                int cnt = 0;
                pair<int,int> cur = {i,j};
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    if(board[nx][ny] == 0) cnt++;
                    
                }
                m_board[i][j] = board[i][j]-cnt;
                if(m_board[i][j] <0) m_board[i][j] = 0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            board[i][j] = m_board[i][j];
        }
    }  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            m_board[i][j] = board[i][j];
        }
    }
    int year = 0;
    int flag = 0;

    while(1){
        memset(m_board,0,sizeof(m_board));
        memset(vis,0,sizeof(vis));
        melt();
        year++;
        int cnt = 0;
        queue<pair<int,int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] == 0 && m_board[i][j] != 0){
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
                        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                        if(vis[nx][ny] || m_board[nx][ny] == 0) continue;
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        if(cnt >= 2) {
            flag = 1;
            break;
        }
        int zero = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] !=0) zero++;
            }
        }

        if(zero == 0){
            break;
        }
    }


    if(flag) cout << year << "\n";
    else cout << 0 << "\n";
    
    

}

//1. 17번문제인줄알고 제출해서 틀림 ㅎㅎ;
//2. 시작부터 2개이상일 경우 값이 이상하게 나옴 -> 이문제가 아닌거같음 문제에서 한 덩어리만 준다했음
//3. 빙하가 10까지 주어진다고 10에서 끝내는게아님. 빙하가 10이어도 안에 갇혀있는 경우가 있음 (따라서 10년 이상이 걸릴 수도 있음)
