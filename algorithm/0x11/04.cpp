#include <bits/stdc++.h>
using namespace std;

int a[51];
int b[51];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int sum=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i]; 

    sort(a,a+n);
    sort(b,b+n);

    for(int i=0; i<n; i++){
        sum = sum + a[i]*b[n-1-i];
    }
    cout << sum << "\n";
}