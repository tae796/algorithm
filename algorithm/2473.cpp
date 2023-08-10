#include <bits/stdc++.h>
using namespace std;

long long a[5005];
long long ans = 1000000005;
long long ans1 = 1000000005;
long long ans2 = 1000000005;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n-2; i++){
        int st = i+1;
        int en = n-1;
        while(st<en){
            if(abs(a[i]+a[st]+a[en]) < abs(ans+ans1+ans2)){
                ans = a[i];
                ans1 = a[st];
                ans2 = a[en];
            }
            if(a[i]+a[st]+a[en] == 0) break;
            if(a[i]+a[st]+a[en]< 0) st++;
            else en--;
        }
    }
    vector<int> v;
    v.push_back(ans);
    v.push_back(ans1);
    v.push_back(ans2);
    sort(v.begin(),v.end());
    cout << v[0] << " " << v[1] << " " << v[2] << "\n";
}