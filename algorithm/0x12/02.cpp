#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;
    while(1){
        int a,b,c;
        int ans=0;
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0) return 0;

        while(c>b){
            c -=b;
            ans+=a;
        }
        if(c>a) ans +=a;
        else ans +=c;

        cout << "Case " << ++cnt << ": " << ans << "\n";
    }
}