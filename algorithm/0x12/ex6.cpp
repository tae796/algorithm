#include <bits/stdc++.h>
using namespace std;

int arr[1002][1002];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for(int i=2; i<=1000; i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
        for(int j=1; j<=i; j++){
            arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%10007;
        }
    }

    cout << arr[n][k] << "\n";
    
    
}