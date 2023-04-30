#include <bits/stdc++.h>
using namespace std;

long long arr[100];
long long sum[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 3;

    sum[3] = 5;
    sum[4] = 8;

    for(int i=4; i<=n; i++){
        arr[i] = sum[i-1] - arr[i-1];
        sum[i] = sum[i-1] + arr[i];
    }

    cout << arr[n] << "\n";
}