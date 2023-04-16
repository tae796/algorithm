#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int board[10][10];
int vis[10][10];
int cnt=0;
int mini = 64;
int n,m;
pair<int,int> arr[36];


void reset(int dir,int k,int a,int b){
    int x = a,y = b;
    if(dir == 1){
        while(1){
            if(board[x][b] == 6) break;
            if(x>=n) break;
            vis[x][b]--;
            x+=1;
        }
    }
    else if (dir == 2){
        while(1){
            if(board[a][y] == 6) break;
            if(y>=m) break;
            vis[a][y]--;
            y+=1;
        }
    }
    else if (dir == 3){
        while(1){
            if(board[x][b] == 6) break;
            if(x<0) break;
            vis[x][b]--;
            x-=1;
        }
    }
    else if (dir == 4){
        while(1){
            if(board[a][y] == 6) break;
            if(y<0) break;
            vis[a][y]--;
            y-=1;
        }
    }
}

void go(int dir,int k,int a,int b){ // 1: 아래, 2: 오른쪽, 3: 위, 4: 왼쪽
    int x = a,y = b;
    if(dir == 1){
        while(1){
            if(board[x][b] == 6) break;
            if(x>=n) break;
            vis[x][b]++;
            x+=1;
        }
    }
    else if (dir == 2){
        while(1){
            if(board[a][y] == 6) break;
            if(y>=m) break;
            vis[a][y]++;
            y+=1;
        }
    }
    else if (dir == 3){
        while(1){
            if(board[x][b] == 6) break;
            if(x<0) break;
            vis[x][b]++;
            x-=1;
        }
    }
    else if (dir == 4){
        while(1){
            if(board[a][y] == 6) break;
            if(y<0) break;
            vis[a][y]++;
            y-=1;
        }
    }
}


void func(int k,int a,int b){

    if(k==cnt){
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] == -1) ans++;
            }
        }
        mini = min(mini,ans);
        return ;
    }
    if(board[a][b] == 1){
        go(1,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        
        go(2,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(2,k,arr[k].X,arr[k].Y);

        go(3,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(3,k,arr[k].X,arr[k].Y);

        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(4,k,arr[k].X,arr[k].Y);
    }
    else if(board[a][b] == 2){
        go(1,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        reset(3,k,arr[k].X,arr[k].Y);

        go(2,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(2,k,arr[k].X,arr[k].Y);
        reset(4,k,arr[k].X,arr[k].Y);
    }
    else if(board[a][b] == 3){
        go(1,k,arr[k].X,arr[k].Y);
        go(2,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        reset(2,k,arr[k].X,arr[k].Y);

        go(2,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(2,k,arr[k].X,arr[k].Y);
        reset(3,k,arr[k].X,arr[k].Y);

        go(3,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(3,k,arr[k].X,arr[k].Y);
        reset(4,k,arr[k].X,arr[k].Y);

        go(4,k,arr[k].X,arr[k].Y);
        go(1,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(4,k,arr[k].X,arr[k].Y);
        reset(1,k,arr[k].X,arr[k].Y);
    }
    else if(board[a][b] == 4){
        go(1,k,arr[k].X,arr[k].Y);
        go(2,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        reset(2,k,arr[k].X,arr[k].Y);
        reset(3,k,arr[k].X,arr[k].Y);

        go(1,k,arr[k].X,arr[k].Y);
        go(2,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        reset(2,k,arr[k].X,arr[k].Y);
        reset(4,k,arr[k].X,arr[k].Y);

        go(1,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(1,k,arr[k].X,arr[k].Y);
        reset(3,k,arr[k].X,arr[k].Y);
        reset(4,k,arr[k].X,arr[k].Y);

        go(2,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
        reset(2,k,arr[k].X,arr[k].Y);
        reset(3,k,arr[k].X,arr[k].Y);
        reset(4,k,arr[k].X,arr[k].Y);
    }
    else if(board[a][b] == 5){
        go(1,k,arr[k].X,arr[k].Y);
        go(2,k,arr[k].X,arr[k].Y);
        go(3,k,arr[k].X,arr[k].Y);
        go(4,k,arr[k].X,arr[k].Y);
        func(k+1,arr[k+1].X,arr[k+1].Y);
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    memset(vis,-1,sizeof(vis));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            cin >> board[i][j];            
            if(board[i][j]>0 && board[i][j]!=6) {
                arr[cnt++] = {i,j};
            }
            else if(board[i][j] == 6) vis[i][j] = 6;
            
        }
    }

    func(0,arr[0].X,arr[0].Y);


    cout << mini << "\n";

}