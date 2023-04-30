#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int order[n];
        long long ans=0;
        int cnt=0;
        long long tot=0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            order[i] = arr[i];
        }

        sort(order,order+n);
        int max_cnt=n-1;

        for(int i=0; i<n; i++){
            if(arr[i] == order[max_cnt]){
                max_cnt--;
                ans += arr[i]*cnt - tot;
                cnt = 0;
                tot = 0;
            }
            else{
                tot +=arr[i];
                cnt++;
            }    
        }

        cout << ans << "\n";
    }
}