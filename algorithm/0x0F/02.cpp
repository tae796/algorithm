#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long arr[n];
    long long a[100000];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);

    long long ans[100000];
    memset(ans,0,sizeof(ans));
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(i==0) {
            ans[cnt]++;
            a[cnt] = arr[i];
        }
        else{
            if(arr[i-1] == arr[i]) {
                ans[cnt]++;
            }
            else {
                cnt++;
                ans[cnt]++;
                a[cnt] = arr[i];
            }
        }
    }


    cout << a[max_element(ans,ans+100000) - ans] << "\n";
    
}