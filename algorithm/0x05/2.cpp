#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;

    int a;
    cin >> a;

    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        if(b == 0) S.pop();
        else S.push(b);
    }
    long long sum = 0;
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }

    
    cout << sum;
}