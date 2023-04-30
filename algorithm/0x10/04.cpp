#include <bits/stdc++.h>
using namespace std;

int board[1005][3];
int sum[1005][3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) cin >> board[i][0] >> board[i][1] >> board[i][2];

    sum[0][0] = board[0][0];
    sum[0][1] = board[0][1];
    sum[0][2] = board[0][2];

    for(int i=1; i<n; i++){
        sum[i][0] = min(sum[i-1][1],sum[i-1][2]) + board[i][0];
        sum[i][1] = min(sum[i-1][0],sum[i-1][2]) + board[i][1];
        sum[i][2] = min(sum[i-1][1],sum[i-1][0]) + board[i][2];
    }

    cout << *min_element(sum[n-1],sum[n-1]+3) << "\n";

    

}