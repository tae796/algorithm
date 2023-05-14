#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int board[50005];
    memset(board,0,sizeof(board));

    
    if(n>=50000){
        int tmp = 0;
        tmp = n/50000;
        n %= 50000;
        board[50000] +=tmp;
    }
    if(n>=10000){
        int tmp = 0;
        tmp = n/10000;
        n %= 10000;
        board[10000] +=tmp;
    }
    if(n>=5000){
        int tmp = 0;
        tmp = n/5000;
        n %= 5000;
        board[5000] +=tmp;
    }
    if(n>=1000){
        int tmp = 0;
        tmp = n/1000;
        n %= 1000;
        board[1000] +=tmp;
    }
    if(n>=500){
        int tmp = 0;
        tmp = n/500;
        n %= 500;
        board[500] +=tmp;
    }
    if(n>=100){
        int tmp = 0;
        tmp = n/100;
        n %= 100;
        board[100] +=tmp;
    }
    if(n>=50){
        int tmp = 0;
        tmp = n/50;
        n %= 50;
        board[50] +=tmp;
    }
    if(n>=10){
        int tmp = 0;
        tmp = n/10;
        n %= 10;
        board[10] +=tmp;
    }

    cout << board[50000] << " " << board[10000] << " " << board[5000] << " " << board[1000] << " " << board[500] << " " << board[100] << " " << board[50] << " " << board[10] <<"\n";
 
    

    

}