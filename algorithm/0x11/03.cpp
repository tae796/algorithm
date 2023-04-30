#include <bits/stdc++.h>
using namespace std;

int rope[100001];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt=0,sum=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >>rope[i];

    sort(rope,rope+n);


    sum = rope[n-1];
    cnt++;

    for(int i=n-2; i>=0; i--){
        sum = max(sum,rope[i]*++cnt);
    }

    cout << sum << "\n";
}