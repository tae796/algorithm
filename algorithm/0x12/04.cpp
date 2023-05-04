#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,tmp;
    cin >> x;

    for(int i=1; i<10000000; i++){
        if(x>i) x-=i;
        else {
            tmp = i;
            break;
        }
    }
    if(tmp%2==0) cout << x<< "/" <<tmp+1-x << "\n";
    else cout << tmp+1-x  << "/" << x << "\n"; 
    
}