#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 ==0) sum -=i;
        else sum +=i;
    }

    cout << sum << "\n";
}