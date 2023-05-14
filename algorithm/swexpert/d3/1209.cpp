#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[102][102];
    memset(arr,0,sizeof(arr));

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++) cin >> arr[i][j];
    }

    int mx = 0;
    for(int i=0; i<100; i++){
        int sum = 0;
        for(int j=0; j<100; j++){
            sum +=arr[i][j];
        }
        mx = max(mx,sum);
    }

    for(int i=0; i<100; i++){
        int sum = 0;
        for(int j=0; j<100; j++){
            sum +=arr[j][i];
        }
        mx = max(mx,sum);
    }
    int sum = 0;
    for(int i=0; i<100; i++){
        sum += arr[i][i];
    }
    mx = max(mx,sum);

    sum = 0;
    for(int i=0; i<100; i++){
        sum += arr[i][99-i];
    }
    mx = max(mx,sum);

    cout << mx << "\n";
}