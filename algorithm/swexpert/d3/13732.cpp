#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int board[20][20];
    memset(board,0,sizeof(board));
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++){
            if(a[j] =='#') board[i][j] = 1;
            else board[i][j] = 0;
        }
    }

    int flag = 1;
    int find = 0;
    int len=0;
    for(int i=0; i<n; i++){
        if(find == 1) break;
        for(int j=0; j<n; j++){
            if(board[i][j] == 0) continue;
            if(find == 1) break;
            
            find = 1;
            for(int a=0; a<n-i; a++){
                if(board[i+a][j] == 1) len++;
                else break;
            }
           
            for(int a=0; a<len; a++){
                for(int b=0; b<len; b++){
                    if(board[i+a][j+b] == 0) flag =0;
                }
            }

        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 1) cnt++;
        }
    }
    if(cnt != len*len) flag = 0;

    if(flag == 1) cout << "yes" << "\n";
    else cout << "no" << "\n";

}