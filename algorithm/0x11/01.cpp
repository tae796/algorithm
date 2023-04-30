#include <bits/stdc++.h>
using namespace std;

int arr[11];
int ans = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;

    for(int i=n; i>0; i--) cin >> arr[i];

    while(k>0){
        for(int i=1; i<=n; i++){
            if(arr[i]>k) continue;
            else if(arr[i]==k){
                ans++;
                cout << ans << "\n";
                return 0;
            }
            else{
                ans++;
                k-=arr[i];
                break;
            }
            
        }
    }
}