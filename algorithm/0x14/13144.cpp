#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int cnt[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    int st = 0;
    int en = 0;
    int len = 0;
    long long ans = 0;

    while(1){
        if(en==n) break;
        if(cnt[arr[en]] == 1){
            cnt[arr[st]] = 0;
            st++;
            len--;
        } 
        else if (cnt[arr[en]] == 0){
            cnt[arr[en]] = 1;
            en++;
            len++;
            ans += len;
        } 
    }
    
    cout << ans << "\n";
}