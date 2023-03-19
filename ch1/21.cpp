#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;

    for(int i=0; i<a; i++){
        for(int j=1; j<=i; j++) cout << " ";
        for(int j=a; j>i; j--) cout <<"*";
        
        cout << "\n";
    }
}