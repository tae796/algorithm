#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int p,q,r,s,w;
    cin >> p >> q >> r >> s >> w;

    int sum1=p*w;
    int sum2=0;

    if(w>r) sum2 = q +s*(w-r);
    else sum2 = q;

    cout << min(sum1,sum2) << "\n";


}