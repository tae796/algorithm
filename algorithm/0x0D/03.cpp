#include <bits/stdc++.h>
using namespace std;

int n;
int board[6][25][25];
int ans = 0;

void down(int k){
    if(k>=1){
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                board[k][i][j] = board[k-1][i][j];
            }
        }
    }

    int bot[n];
    memset(bot,0,sizeof(bot));
    for(int i=n-1;i>=0;i--){
        for(int j=0; j<n; j++){
            if(board[k][i][j] == 0){
                bot[j] = max(bot[j],i);
                continue;
            }
            if(bot[j] !=0 && board[k][bot[j]][j] == 0){
                board[k][bot[j]][j] = board[k][i][j];
                bot[j]--;
                board[k][i][j] = 0;
            }
        }
    }


    for(int i = n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(board[k][i][j] ==0) continue;
            if(board[k][i][j] == board[k][i-1][j]){
                board[k][i][j] = board[k][i][j] * 2;
                board[k][i-1][j] = 0;
            }
        }
    }

    memset(bot,0,sizeof(bot));
    for(int i=n-1;i>=0;i--){
        for(int j=0; j<n; j++){
            if(board[k][i][j] == 0){
                bot[j] = max(bot[j],i);
                continue;
            }
            if(bot[j] !=0 && board[k][bot[j]][j] == 0){
                board[k][bot[j]][j] = board[k][i][j];
                bot[j]--;
                board[k][i][j] = 0;
            }
        }
    }

}


void up(int k){
    if(k>=1){
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                board[k][i][j] = board[k-1][i][j];
            }
        }
    }
    int top[n];
    fill(top,top+n,n-1);

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(board[k][i][j] == 0){
                top[j] = min(top[j],i);
                continue;
            }
            if(top[j] !=n-1 && board[k][top[j]][j] == 0){
                board[k][top[j]][j] = board[k][i][j];
                top[j]++;
                board[k][i][j] = 0;
            }
        }
    }


    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[k][i][j] ==0) continue;
            if(board[k][i][j] == board[k][i+1][j]){
                board[k][i][j] = board[k][i][j] * 2;
                board[k][i+1][j] = 0;
            }
        }
    }

    fill(top,top+n,n-1);
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(board[k][i][j] == 0){
                top[j] = min(top[j],i);
                continue;
            }
            if(top[j] !=n-1 && board[k][top[j]][j] == 0){
                board[k][top[j]][j] = board[k][i][j];
                top[j]++;
                board[k][i][j] = 0;
            }
        }
    }

}


void right(int k){
    if(k>=1){
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                board[k][i][j] = board[k-1][i][j];
            }
        }
    }
    int bot[n];
    memset(bot,0,sizeof(bot));
    for(int j=n-1;j>=0;j--){
        for(int i=0; i<n; i++){
            if(board[k][i][j] == 0){
                bot[i] = max(bot[i],j);
                continue;
            }
            if(bot[i] !=0 && board[k][i][bot[i]] == 0){
                board[k][i][bot[i]] = board[k][i][j];
                bot[i]--;
                board[k][i][j] = 0;
            }
        }
    }

    for(int j = n-1; j>=0; j--){
        for(int i=0; i<n; i++){
            if(board[k][i][j] ==0) continue;
            if(board[k][i][j] == board[k][i][j-1]){
                board[k][i][j] = board[k][i][j] * 2;
                board[k][i][j-1] = 0;
            }
        }
    }

    memset(bot,0,sizeof(bot));
    for(int j=n-1;j>=0;j--){
        for(int i=0; i<n; i++){
            if(board[k][i][j] == 0){
                bot[i] = max(bot[i],j);
                continue;
            }
            if(bot[i] !=0 && board[k][i][bot[i]] == 0){
                board[k][i][bot[i]] = board[k][i][j];
                bot[i]--;
                board[k][i][j] = 0;
            }
        }
    }

}


void left(int k){
    if(k>=1){
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                board[k][i][j] = board[k-1][i][j];
            }
        }
    }
    int top[n];
    fill(top,top+n,n-1);

    for(int j=0;j<n;j++){
        for(int i=0; i<n; i++){
            if(board[k][i][j] == 0){
                top[i] = min(top[i],j);
                continue;
            }
            if(top[i] !=n-1 && board[k][i][top[i]] == 0){
                board[k][i][top[i]] = board[k][i][j];
                top[i]++;
                board[k][i][j] = 0;
            }
        }
    }


    for(int j = 0; j<n; j++){
        for(int i=0; i<n; i++){
            if(board[k][i][j] ==0) continue;
            if(board[k][i][j] == board[k][i][j+1]){
                board[k][i][j] = board[k][i][j] * 2;
                board[k][i][j+1] = 0;
            }
        }
    }

    fill(top,top+n,n-1);
    for(int j=0;j<n;j++){
        for(int i=0; i<n; i++){
            if(board[k][i][j] == 0){
                top[i] = min(top[i],j);
                continue;
            }
            if(top[i] !=n-1 && board[k][i][top[i]] == 0){
                board[k][i][top[i]] = board[k][i][j];
                top[i]++;
                board[k][i][j] = 0;
            }
        }
    }

}

void func(int k){
    if(k==6){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans =  max(ans,board[5][i][j]);
            }
            
        }
        return ;    
    }

    down(k);
    func(k+1);

    up(k);
    func(k+1);
    right(k);
    func(k+1);
    left(k);
    func(k+1);
   

}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[0][i][j];
        }
    }
    func(1);


    cout << ans << "\n";


}


//  (k>=1로 해놔서) 처음 시도할 때 원본이 망가졌음 따라서 원본은 0에 두고 1부터 시작