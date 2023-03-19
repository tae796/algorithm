#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;

    for(int i=1; i<=a; i++){
        for(int j=i; j<a; j++) cout << " ";
        for(int j=0; j<2*i-1; j++) cout <<"*";
        cout << "\n";
    }
}