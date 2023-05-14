#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a,b;
    cin >> a;
    for(int i=a.length()-1; i>=0; i--){
        b += a[i];
    }
    if(a.compare(b)==0) cout << 1 <<"\n";
    else cout << 0 <<"\n";


}