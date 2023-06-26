#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int odd[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> arr[i];

    int cnt=0;
    int st=0;
    int en=0;
    int mx=0;
    int len=0;
    while(1){
        if(en==n) break;

        if(cnt>k && arr[st]%2==0){
            st++;
            len--;
        }
        else if(cnt>k && arr[st]%2==1){
            st++;
            cnt--;
        }

        if(arr[en]%2==0){
            en++;
            len++;
        }
        else{
            cnt++;
            en++;
        }

        mx = max(mx,len);
    }
    
    cout << mx << "\n";
}
