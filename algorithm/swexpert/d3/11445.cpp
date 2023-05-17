#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string p,q;
    bool flag = false;
    cin >> p >> q;
    if (q == p + 'a') flag = false;
    else flag = true;

    if(flag) cout << "#" << test_case << " Y" << '\n';
    else cout << "#" << test_case << " N" << '\n';


}