#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    if(n==1) {
        cout << 64 << "\n";
        return 0;
    }

    int board[8][8];
    memset(board,0,sizeof(board));

    for(int i=0; i<8; i++){
        string a;
        cin >> a;
        for(int j=0; j<8; j++){
            if(a[j] == 'A') board[i][j] = 0;
            else if(a[j] == 'B') board[i][j] = 1;
            else board[i][j] = 2;
        }
    }


    int ans =0;
    for(int i=0; i<8; i++){
        for(int j=0; j<=8-n; j++){
            string tmp = "";
            string r_tmp ="";
            for(int k=0; k<n; k++){
                tmp += to_string(board[i][j+k]);
            }
            for(int k=n-1; k>=0; k--){
                r_tmp += to_string(board[i][j+k]);
            }
            if(tmp.compare(r_tmp)==0) ans++;
        }
    }
    
    for(int i=0; i<8; i++){
        for(int j=0; j<=8-n; j++){
            string tmp = "";
            string r_tmp ="";
            for(int k=0; k<n; k++){
                tmp += to_string(board[j+k][i]);
            }
            for(int k=n-1; k>=0; k--){
                r_tmp += to_string(board[j+k][i]);
            }
            if(tmp.compare(r_tmp)==0) ans++;
        }
    }


     cout << ans << "\n";
}