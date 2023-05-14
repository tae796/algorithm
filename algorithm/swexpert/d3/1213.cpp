#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i=0; i<=b.size()-a.size(); i++){
        string tmp ="";
        for(int j=0; j<a.size(); j++){
            tmp+= b[i+j];
        }
        if(a.compare(tmp) == 0) ans++;
    }
    
    cout << ans << "\n";
}