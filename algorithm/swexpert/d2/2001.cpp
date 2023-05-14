#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int board[20][20];
    cin >> n >> m;
    int mx = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> board[i][j];
    }
    
    for(int i=0; i<n; i++){
        if(i+m>n) continue;
        for(int j=0; j<n; j++){ //시작점
            int sum = 0;
            if(j+m>n) continue;
            for(int k=0; k<m;k++){
                for(int l=0; l<m; l++){
                    sum += board[i+k][j+l];
                }
            }
            mx = max(sum,mx);
        }
    }

    cout << mx << "\n";

}


// 4중포문을 썼는데 줄일방법은?