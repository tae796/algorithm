#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;

    cin >> a >> b >> c;

    int ans = 0;
    int tmp = a/100;
    for(int i=0; i<c; i++){
        ans += a + (i*b)*tmp;
    }

    cout << ans << "\n";
}