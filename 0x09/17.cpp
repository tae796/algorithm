#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[100002];
int vis[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    while(a--){
        memset(board,0,sizeof(board));
        memset(vis,0,sizeof(vis));
        queue<int> q;
        int n,cnt=0;
        cin >> n;
        for(int i=1; i<=n; i++) cin >> board[i];    

        for(int i=1; i<=n; i++){
            if(vis[i] == 0)
                q.push(i);
            while(!q.empty()){
                int cur = board[q.front()];
                q.pop();
                if(vis[cur]) break;
                if(board[cur]<0 || board[cur] >n) break;
                vis[cur] = 1;
                q.push(cur);
            }    
            if(vis[i] == 0) {
                cnt++;
            }
        }
        cout << cnt << "\n";

    }
}

//1. 시간초과
//2. 시간초과 
//3. 시간초과 
//4. 어떻게 시간을 줄여야할지 모르겠다ㅏㅏㅏㅏㅏㅏㅏㅏ