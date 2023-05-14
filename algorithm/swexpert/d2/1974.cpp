#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int board[10][10];
    int vis[10];
    memset(vis,0,sizeof(vis));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++) cin >> board[i][j];
    }

    int flag = 1;
    for(int i=0; i<9; i++){
        memset(vis,0,sizeof(vis));
        for(int j=0; j<9; j++){
            if(vis[board[i][j]]==0) vis[board[i][j]]=1;
            else flag =0;
        }
    }
    memset(vis,0,sizeof(vis));
    for(int j=0; j<9; j++){
        memset(vis,0,sizeof(vis));
        for(int i=0; i<9; i++){
            if(vis[board[i][j]]==0) vis[board[i][j]]=1;
            else flag =0;
        }
    }

    for(int i=0; i<9; i+=3){
        for(int j=0;j<9;j+=3){
            memset(vis,0,sizeof(vis));
            for(int k=0; k<3; k++){
                for(int l=0; l<3; l++){
                    if(vis[board[i+k][j+l]]==0) vis[board[i+k][j+l]]=1;
                    else flag =0;
                }
            }
        }
    }

    if(flag) cout << 1 <<"\n";
    else cout << 0 << "\n";
}
