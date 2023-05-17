#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    cin >> a;
    int cnt = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] =='x') cnt++;
    }    
    
    if(cnt>7) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}