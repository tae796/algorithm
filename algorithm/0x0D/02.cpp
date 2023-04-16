#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[40][40];
int n,m,k;

int func(int a,int b){
    if(a<0 || a>=n || b<0 || b>=m) return 1;
    else return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    memset(board,0,sizeof(board));

    while(k--){
        int x,y;
        int used = 0;
        cin >> x >> y;
        vector<pair<int,int>> v;
        for(int i=0; i<x; i++){
            for(int j=0; j<y;j++){
                int tmp;
                cin >> tmp;
                if(tmp == 1) v.push_back({i,j});
            }
        }

        for(int i=0; i<n; i++){ //0도 확인
            for(int j=0; j<m; j++){
                if(used == 1) continue;
                int flag = 1;
                for(int a=0; a<v.size(); a++){ 
                    if(func(i+v[a].X,j+v[a].Y)) {
                        flag = 0;
                        break;
                    }
                    if(board[i+v[a].X][j+v[a].Y] == 1) flag = 0;
                }
                
                if(flag==1){
                    used = 1;
                    for(int a=0; a<v.size(); a++){
                        board[i+v[a].X][j+v[a].Y] = 1;
                    }   
                }
            }
        }

        if(used == 1) continue;
        for(int i=0; i<n; i++){ //90도 확인 -> a,b -> b,x-1-a
            for(int j=0; j<m; j++){
                if(used == 1) continue;
                int flag = 1;
                for(int a=0; a<v.size(); a++){
                    if(func(i+v[a].Y,j+x-1-v[a].X)) {
                        flag = 0;
                        break;
                    }
                    if(board[i+v[a].Y][j+x-1-v[a].X] == 1) flag = 0;
                    
                }
                
                if(flag==1){
                    used = 1;
                    for(int a=0; a<v.size(); a++){
                        board[i+v[a].Y][j+x-1-v[a].X] = 1;
                    }   
                }
            }
        }
        if(used == 1) continue;
        for(int i=0; i<n; i++){//180도 확인 -> a,b -> x-1-a,y-1-b
            for(int j=0; j<m; j++){
                if(used == 1) continue;
                int flag = 1;
                for(int a=0; a<v.size(); a++){ 
                    if(func(i+x-1-v[a].X,j+y-1-v[a].Y)) {
                        flag = 0;
                        break;
                    }
                    if(board[i+x-1-v[a].X][j+y-1-v[a].Y] == 1) flag = 0;
                }
                if(flag==1){
                    used = 1;
                    for(int a=0; a<v.size(); a++){
                        board[i+x-1-v[a].X][j+y-1-v[a].Y] = 1;
                    }   
                }
            }
        }
        if(used == 1) continue;
        for(int i=0; i<n; i++){ //270도 확인 -> a,b -> y-1-b,a
            for(int j=0; j<m; j++){
                if(used == 1) continue;
                int flag = 1;
                for(int a=0; a<v.size(); a++){ 
                    if(func(i+y-1-v[a].Y,j+v[a].X)) {
                        flag = 0;
                        break;
                    }
                    if(board[i+y-1-v[a].Y][j+v[a].X] == 1) flag = 0;
                }
                if(flag==1){
                    used = 1;
                    for(int a=0; a<v.size(); a++){
                        board[i+y-1-v[a].Y][j+v[a].X] = 1;
                    }   
                }
            }
        }

        


                
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            if(board[i][j] == 1) ans++;
        }
    }

    cout << ans << "\n";

}


// 틀린 이유를 아예 모르겠음
// 회전 시키지 않고 끝까지 순회한 다음에, 자리가 없으면 회전시켜야 합니다. <- 이렇게 안했네..