#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        string a = to_string(i);
        int flag = 0;
        int cnt = 0;
        for(int j=0; j<a.length(); j++){
            if(a[j] == '3' || a[j] == '6' || a[j] == '9') {
                flag = 1;
                cnt++;
            }
        }
        if(flag==0) cout << a;
        else {
            for(int j=0; j<cnt; j++){
                cout << "-";
            }
        }
        cout << " ";
    }
    
    
    
}