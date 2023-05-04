#include <bits/stdc++.h>
using namespace std;

int board[105][10005];
int board1[105][10005];



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }


    for(int i=0; i<m; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            v.push_back(board[i][j]);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());

        for(int j=0; j<n; j++){
            board1[i][j] = lower_bound(v.begin(),v.end(),board[i][j]) - v.begin();
        }
    }
    int ans=0;
    
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int flag = 1;
            for(int k=0; k<n; k++){
                if(board1[i][k] != board1[j][k]) flag = 0;
            }
            if(flag) ans++;
        }
    }

    cout << ans << "\n";

}