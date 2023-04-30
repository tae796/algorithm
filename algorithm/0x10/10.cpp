#include <bits/stdc++.h>
using namespace std;

int arr[1001];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 3;

    for(int i=3; i<=n; i++)
        arr[i] = (arr[i-1] + 2*arr[i-2])%10007;

    cout << arr[n] << "\n";
}