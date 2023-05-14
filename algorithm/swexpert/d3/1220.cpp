#include <bits/stdc++.h>
using namespace std;

int board[103][103];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n = 100;
    

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> board[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            if(board[i][j] == 2){
                int tmp = i;
                while(tmp>0){
                    if(board[tmp-1][j] == 0 || board[tmp-1][j] == 2){
                        board[tmp-1][j] = board[tmp][j];
                        board[tmp][j] = 0;
                    }
                    else break;
                    tmp -=1;
                }
                if(tmp == 0 && board[tmp][j] == 2) board[tmp][j] = 0;
            }
            else continue;
        }
    }

    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--) {
            if(board[i][j] == 1){
                int tmp = i;
                while(tmp<n){
                    if(board[tmp+1][j] == 0 || board[tmp+1][j] == 1){
                        board[tmp+1][j] = board[tmp][j];
                        board[tmp][j] = 0;
                    }
                    else break;
                    tmp +=1;
                }
                if(tmp == n && board[tmp-1][j] == 1) board[tmp-1][j] = 0;
            }
            else continue;
        }
    }
    int ans = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 1 || board[i][j] == 2){
                board[i][j] = 0;
                board[i+1][j] = 0;
                ans++;
            }
        }
    }

    cout << ans <<"\n";
   




}