#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int flag = 0;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            if((i*j) == n) flag = 1;
        }
    }
    if(flag == 1) cout << "Yes" << "\n";
    else cout << "No" << "\n";


}