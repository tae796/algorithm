#include <bits/stdc++.h>
using namespace std;

int a[100005];
int ans = 1000000005;
int ans1 = 1000000005;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];

    int st = 0;
    int en = n-1;
    while(st<en){
        if(abs(a[st] + a[en]) < abs(ans + ans1)){
            ans = a[st];
            ans1 = a[en];
        }
        if(abs(a[st+1] + a[en]) <  abs(a[st] + a[en-1])) st++;
        else en--;
    }

    cout << ans << " " << ans1 << "\n";
    

}