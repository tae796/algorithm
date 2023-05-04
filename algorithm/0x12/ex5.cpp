#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for(int i=0; i<n; i++) arr[i] = 1;
    for(int i=0; i<k; i++) arr[i] = 0;

    do{
        ans++;
    } while(next_permutation(arr,arr+n));

    cout << ans << "\n"
    
    
}