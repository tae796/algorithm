#include <bits/stdc++.h>
using namespace std;

int board[350];
int sum[350][2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> board[i+1];

    sum[1][0] = board[1];
    sum[2][0] = board[2];
    sum[2][1] = board[1] + board[2];
    for(int i=2; i<n; i++){
        sum[i+1][0] = max(sum[i-1][1],sum[i-1][0]) + board[i+1];
        sum[i+1][1] = sum[i][0] + board[i+1];
    }

    
    cout << max(sum[n][0],sum[n][1]) << "\n";
       
}