#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;

    int x = 1;
    int y = 1;
    for(int i=0; i<a.size(); i++){
        if(a[i] == 'L'){
            y = x+y;
        }
        else if(a[i] == 'R'){
            x = x+y;
        }
    }

    cout << x << " " << y << "\n";
}