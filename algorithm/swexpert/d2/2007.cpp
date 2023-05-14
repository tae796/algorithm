#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        string a;
        cin >> a;
        for(int j=1; j<=10; j++){
            int tmp = j;
            int st=0;
            string tmp1 = a.substr(st,j);
            st +=j;
            string tmp2 = a.substr(st,j);
            if(tmp1.compare(tmp2) ==0) {
                cout << "#" <<i <<" " << j << "\n";
                break;
            }
            
            
        }
    }
}