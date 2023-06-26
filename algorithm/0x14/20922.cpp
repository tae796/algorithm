#include <bits/stdc++.h>
using namespace std;

int arr[200005];
int cnt[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> arr[i];

    int st=0;
    int en=0;
    int len=0;
    int ans=0;

    while(1){
        if(en == n) break;
        if(cnt[arr[en]]<k){
            cnt[arr[en]]++;
            en++;
            len++;
        }
        else{
            cnt[arr[st]]--;
            st++;
            len--;
        }

        ans = max(ans,len);
    }

    cout << ans << "\n";
}