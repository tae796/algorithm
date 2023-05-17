#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    cin >> a;
    int ans = 0;
    for(int i=1; i<a.size(); i++){
        if((a[i-1]-'a'+1) == (a[i]-'a')) ans++;
        else break;
        
    }
    if(a[0] == 'a') cout << ans+1 << "\n";
    else cout << 0 << "\n";
}