#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    int board[27];
    char arr[1000];
    memset(arr,0,sizeof(arr));
    memset(board,0,sizeof(board));
    int cnt = 0;
    for(int i=0; i<n; i++){
        char a;
        int b;
        cin >> a >> b;
        for(int i=0; i<b; i++) arr[cnt++] = a;
    }

    for(int i=0; i<cnt; i+=10){
        for(int j=i; j<i+10; j++){
            if(j==cnt) break;
            else cout << arr[j]<< "";
        }
        cout << "\n";
    }
    


}