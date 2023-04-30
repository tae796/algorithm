#include <bits/stdc++.h>
using namespace std;

long long board[1001];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    board[1] = 1;
    board[2] = 2;

    for(int i=3; i<=n; i++){
        board[i] = (board[i-1] + board[i-2])%10007;
    }

    cout << board[n] <<"\n";
}

//long long으로 하고 마지막에 나눴는데도 안되나보다