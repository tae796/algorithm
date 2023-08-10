#include <bits/stdc++.h>
using namespace std;

int a[3000];
int ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a,a+n);

    for(int i=0; i<n; i++){
        int st=0;
        int en = n-1;
        while(st<en){
            if(st == i) st++;
            if(en == i) en--;
            if(st>=en) break;
            int tmp = a[st] + a[en];
            if(tmp == a[i]){
                ans++;
                break;
            }
            if(tmp < a[i]) st++;
            else en--;
            
        }
    }

    cout << ans << "\n";

}