#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin >> a >> b >> c;

    if(c>=b) {
        if(c==100 && b!=100) cout << "Broken"  << "\n";
        else cout << "Possible" << "\n";
    }
    else {
        
        cout << "Broken" << "\n";    
    }
    
}