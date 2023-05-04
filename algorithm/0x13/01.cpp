#include <bits/stdc++.h>
using namespace std;

int board[20000003];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        tmp +=10000000;
        board[tmp] = 1;
    }
    int k;
    cin >> k;
    for(int i=0; i<k; i++){
        int tmp;
        cin >> tmp;
        tmp +=10000000;
        cout << board[tmp] << " ";
    }
    
}