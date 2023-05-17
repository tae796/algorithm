#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    int flag = 1;
    if(m%2==0) flag = 0;
    else{
        int cnt = 0;
        for(int i=0; i<n; i++){
            int tmp = m%2;
            if(tmp == 1) cnt++;
            m = m/2;
        }
        if(cnt != n) flag = 0;
    }

    if(flag ==1) cout << "ON" << "\n";
    else cout << "OFF" << "\n";
    
}