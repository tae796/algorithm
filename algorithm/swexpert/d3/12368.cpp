#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;

    int ans = a+b;

    if(ans>=24) ans = ans%24;

    cout << ans << "\n";
}