#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    int board[10][10];
    memset(board,0,sizeof(board));
    int n,m;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<a.size(); j++){
            board[i][j] = a[j]-'0';
        }
    }
    
    int flag = 1;
    for(int i=0; i<m; i++){
        for(int j=1; j<n; j++){
            if(board[j-1][i] == board[j][i]) flag = 0;
        }
    }

    if(flag==1) cout << "yes" << "\n";
    else cout << "no" << "\n";
}