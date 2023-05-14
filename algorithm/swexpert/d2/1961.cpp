#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int board[8][8];
    string ans[8];


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>> board[i][j];
    }

    for(int i=0; i<n; i++){
        ans[i] = "";
    }
    
    for(int i=0; i<n; i++){
        string tmp = "";
        for(int j=n-1; j>=0; j--){
            tmp += to_string(board[j][i]);
        }
        tmp += " ";
        ans[i] += tmp;
        
        
    }
    
    for(int i=n-1; i>=0; i--){
        string tmp = "";
        for(int j=n-1; j>=0; j--){
            tmp += to_string(board[i][j]);
        }
        tmp += " ";
        ans[n-1-i] += tmp;
    }

    for(int i=n-1; i>=0; i--){
        string tmp = "";
        for(int j=0; j<n; j++){
            tmp += to_string(board[j][i]);
        }
        tmp += " ";
        ans[n-1-i] += tmp;
    }

    for(int i=0; i<n; i++){
        cout << ans[i];
        cout << "\n";
    }
}