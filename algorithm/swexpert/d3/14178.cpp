#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,d;
    cin >> n >> d;

    d = d*2+1;

    int ans = n/d;
    if(n%d !=0) ans++;
    
    cout << ans << "\n";
}