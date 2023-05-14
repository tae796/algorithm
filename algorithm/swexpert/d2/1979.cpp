#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    int board[17][17];
    int cnt=0;
    memset(board,0,sizeof(board));
    cin >> n >> k;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> board[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+k>n) continue;
            int flag = 1;
            if(j>0){
                if(board[i][j-1] == 1) flag = 0;
            }
            for(int a=0; a<k; a++){
                if(board[i][j+a] == 0) flag = 0;
            }
            if(board[i][j+k] == 1) flag = 0;
            if(flag ==1) {
                cnt++;
            }
        }
        for(int j=0; j<n; j++){
            if(i+k>n) continue;
            int flag = 1;
            if(i>0){
                if(board[i-1][j] == 1) flag = 0;
            }
            for(int a=0; a<k; a++){
                if(board[i+a][j] == 0) flag = 0;
            }
            if(board[i+k][j] == 1) flag = 0;
            if(flag ==1) {
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
    
}