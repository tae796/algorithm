#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    


        cout << i << " ";
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ans = 0;

    if(b>=d){
        ans = d-max(a,c);
        if(ans<0) ans = 0;
        cout << ans << "\n";
    }
    else if(b>c){
        ans = b-max(a,c);
        if(ans<0) ans = 0;
        cout << ans << "\n";
    }
    else cout << 0 << "\n";




}