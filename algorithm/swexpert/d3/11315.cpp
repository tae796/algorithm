#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int board[22][22];
    memset(board,0,sizeof(board));


    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++) {
            if(a[j] == '.') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }
    int ans = 0;
    for(int i=0; i<n-4; i++){
        int flag = 0;
        for(int j=0; j<n; j++){
            if(board[i][j] == 0) continue;
            if(board[i][j] && board[i+1][j] && board[i+2][j] &&board[i+3][j] &&board[i+4][j]){
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 1) {
            ans = 1;
            break;
        }
    }

    for(int i=0; i<n-4; i++){
        int flag = 0;
        for(int j=0; j<n; j++){
            if(board[j][i] == 0) continue;
            if(board[j][i] && board[j][i+1] && board[j][i+2] &&board[j][i+3] &&board[j][i+4]){
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 1) {
            ans = 1;
            break;
        }
    }

    for(int i=0; i<n-4; i++){
        int flag = 0;
        for(int j=0; j<n-4; j++){
            if(board[j][i] == 0) continue;
            if(board[j][i] && board[j+1][i+1] && board[j+2][i+2] &&board[j+3][i+3] &&board[j+4][i+4]){
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 1) {
            ans = 1;
            break;
        }
    }

    for(int i=0; i<n-4; i++){
        int flag = 0;
        for(int j=4; j<n; j++){
            if(board[i][j] == 0) continue;
            if(board[i][j] && board[i+1][j-1] && board[i+2][j-2] &&board[i+3][j-3] &&board[i+4][j-4]){
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 1) {
            ans = 1;
            break;
        }
    }


    if(ans == 1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
}