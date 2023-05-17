#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>> n;

    int cnt=0;

    for(int i=-n; i<=n; i++){
        for(int j=-n; j<=n; j++){
            if((i*i + j*j)<=n*n) cnt++;
        }
    }
    

    cout <<  cnt << "\n";
}