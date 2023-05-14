#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int arr[12][12];
    memset(arr,0,sizeof(arr));
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;


    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1) arr[i][j] = arr[i-1][j];
            else if (j==i) arr[i][j] = arr[i-1][j-1];
            else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cout << arr[i][j] << " ";
        cout << "\n";
    }
    

}