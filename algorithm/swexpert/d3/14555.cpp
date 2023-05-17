#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    string a;
    cin >> a;
    int ans =0;
    for(int i=0; i<a.size()-1; i++){
        if(a[i]=='('){
            if(a[i+1] == ')' || a[i+1] == '|') ans++;
        }
        else if(a[i]=='|'){
            if(a[i+1] == ')') ans++;
        }
    }
    cout << ans << "\n";

}