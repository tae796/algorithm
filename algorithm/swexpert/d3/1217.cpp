#include <bits/stdc++.h>
using namespace std;

int n,m;

int func(int k){
    if(k==m) return n;
    return n*func(k+1);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cout << func(1) << "\n";

    
}