#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[10001];
    memset(arr,0,sizeof(arr));
    int sum = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sum = sum/n;

    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=sum) ans++;
    }


    cout << ans << "\n";
}