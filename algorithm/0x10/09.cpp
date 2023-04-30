#include <bits/stdc++.h>
using namespace std;

int arr[501][501];
int sum[501][501];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cin >> arr[i][j];
    }
    
    sum[1][1] = arr[1][1];
    sum[2][1] = sum[1][1] + arr[2][1];
    sum[2][2] = sum[1][1] + arr[2][2];
    // sum[3][1] = sum[2][1] + arr[3][1];
    // sum[3][2] = max(sum[2][1],sum[2][2]) + arr[3][2];
    // sum[3][3] = sum[2][2] + arr[3][3];

    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1) sum[i][j] = sum[i-1][j] + arr[i][j];
            else if(j==i) sum[i][j] = sum[i-1][j-1] + arr[i][j];
            else sum[i][j] = max(sum[i-1][j-1],sum[i-1][j]) + arr[i][j];
        }
    }

    cout << *max_element(sum[n]+1,sum[n]+n+1) << "\n";

}