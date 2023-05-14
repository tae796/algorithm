#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int board[100][100];
    memset(board,0,sizeof(board));
    vector<int> v;
    int len = 0;


    for(int i=0; i<100; i++){
        string a;
        cin >> a;
        for(int j=0; j<100; j++){
            if(a[j] == 'A') board[i][j] = 0;
            else if(a[j] == 'B') board[i][j] = 1;
            else board[i][j] = 2;
        }
    }


    for(int n=99; n>=0; n--){
        int ans =0;
        for(int i=0; i<100; i++){
            for(int j=0; j<=100-n; j++){
                string tmp = "";
                string r_tmp ="";
                for(int k=0; k<n; k++){
                    tmp += to_string(board[i][j+k]);
                }
                for(int k=n-1; k>=0; k--){
                    r_tmp += to_string(board[i][j+k]);
                }
                if(tmp.compare(r_tmp)==0) v.push_back(tmp.size());
            }
        }
        
        for(int i=0; i<100; i++){
            for(int j=0; j<=100-n; j++){
                string tmp = "";
                string r_tmp ="";
                for(int k=0; k<n; k++){
                    tmp += to_string(board[j+k][i]);
                }
                for(int k=n-1; k>=0; k--){
                    r_tmp += to_string(board[j+k][i]);
                }
                if(tmp.compare(r_tmp)==0) v.push_back(tmp.size());
            }
        }

        if(!v.empty()) break;
    }
    


     cout << *max_element(v.begin(),v.end()) << "\n";
}