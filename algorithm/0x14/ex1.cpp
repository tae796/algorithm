#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;

    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);

    int st=0;
    int en=0;
    int min_value = 2000000001;
    while(1){
        if(st==n-1) break;
        
        if(arr[en]-arr[st] >= m) {
            min_value = min(min_value,arr[en]-arr[st]);
            st++;
        }
        else{
            en++;
        }
    }

    cout << min_value << "\n";
}