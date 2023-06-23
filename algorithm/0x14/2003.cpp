#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int st = 0;
    int en = 0;
    int sum = 0;
    int ans = 0;
    
    while(1){
        if(sum < m){
            if(en == n) break;
            sum += arr[en];
            en++;
        }
        else if(sum == m){
            ans++;
            sum -= arr[st];
            st++;
        }
        else{
            sum -= arr[st];
            st++;
        }
    }

    cout << ans << "\n";

}