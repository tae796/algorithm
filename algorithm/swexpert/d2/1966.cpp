#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[55];
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);

    for(int i=0; i<n; i++) cout << arr[i] << " ";

}