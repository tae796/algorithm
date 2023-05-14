#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int board[12][12];
    int h=0;
    int h1=0;
    int w=0;
    int w1=0;
    int cnt=0;
    while(1){
        if(cnt == n*n) break;
        for(int i=w1; i<n-w; i++) board[h][i] = ++cnt;
        h++;
        if(cnt == n*n) break;
        for(int i=h; i<n-h1; i++) board[i][n-1-w] = ++cnt;
        w++;
        if(cnt == n*n) break;
        for(int i=w; i<n-w1; i++) board[n-1-h1][n-1-i] = ++cnt;
        h1++;
        if(cnt == n*n) break;
        for(int i=h1; i<n-h; i++) board[n-1-i][w1] = ++cnt;
        w1++;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << board[i][j]<< " ";
        cout << "\n";
    }
}