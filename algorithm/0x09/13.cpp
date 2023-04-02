#include <bits/stdc++.h>
using namespace std;

int board[2000002];
int vis[2000002];
int dx[2] = {1,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int f,s,g,u,d;
    cin >> f >> s >> g >> u >> d;
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));

    board[s] = 1;
    board[g] = 2;

    if(s == g){
        cout << 0 << "\n";
        return 0;
    }

    queue<int> q;
    vis[s] = 1;
    q.push(s);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int dir=0; dir<2; dir++){
            int nx;
            if(dir == 0){ //up
                nx = cur + u*dx[dir];
            } 
            else{
                nx = cur + d*dx[dir];
            }
            if(nx<=0 || nx>f) continue;
            if(vis[nx]) continue;
            if(board[nx] == 2){
                cout << vis[cur] <<"\n";
                return 0;
            }
            vis[nx] = vis[cur]+1;
            q.push(nx);
        }
    }

    cout << "use the stairs" << "\n";

}

//1. 도착층과 시작층이 같은 경우 0을 출력해야 하는데 use the stairs를 출력함