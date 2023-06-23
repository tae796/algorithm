#include <bits/stdc++.h>
using namespace std;

int arr[100004];
int cnt[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) cin >> arr[i];

    int st=0;
    int en=0;
    int ans=0;

    while(1){
        if(cnt[arr[en]] == 0){
            ans++;
            cnt[arr[en]]++;
            en++;
        }
        else{
            cnt[arr[st]]--;
            st++;
        }
        
    }

    cout << ans << "\n";
}