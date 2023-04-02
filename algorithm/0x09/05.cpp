#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[100001];
int vis[100001];

int dx[2] = {-1,1};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int a,b;
    int cnt = 0;
    cin >> a >> b;

    if(a == b) {
        cout << 0 << "\n";
        return 0;
    }
    q.push(a);
    vis[a] = 0;
    
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int dir=0; dir<3; dir++){
            int nx;
            if(dir == 2) nx = cur*2;
            else nx = cur + dx[dir];
            if(nx < 0 || nx>100000) continue;
            if(vis[nx]) continue;
            vis[nx] = vis[cur]+1;
            q.push(nx);
            if(nx == b){
                cout << vis[nx] << "\n";
                return 0;
            }
        }

    }


}

//1. 런타임에러 OutOfBound -> 범위 검사를 먼저해야하는데 나중에 함
