#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int board[8][8];
    queue<pair<int,int>> q;
    memset(board,0,sizeof(board));
    int n=8;
    int cnt=0;
    int flag = 1;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++){
            if(a[j] == '.') board[i][j] = 0;
            else if(a[j] == 'O') {
                q.push({i,j});
                board[i][j] =1;
                cnt++;
            }
        }
    }
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i=0; i<n; i++){
            if(i==cur.X) continue;
            if(board[i][cur.Y] == 1) flag =0;
        }
        for(int i=0; i<n; i++){
            if(i==cur.Y) continue;
            if(board[cur.X][i] == 1) flag =0;
        }
    
    }

    
    if(cnt != 8) flag = 0;


    if(flag == 1) cout << "yes" << "\n";
    else cout << "no" << "\n";
}