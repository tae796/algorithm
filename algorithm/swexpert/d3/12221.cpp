#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;

    if(a>=10 || b>=10) cout << -1 << "\n";
    else cout << a*b << "\n";
    
}