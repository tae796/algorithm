#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m,n;
    cin >> n >> m;
    int a[22];
    int b[22];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    
    int mx = 0;
    if(n>m){
        int diff = n-m;        
        for(int i=0; i<=diff; i++){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum += a[j+i] * b[j];
            }
            mx = max(mx,sum);
        }
    }
    else{
        int diff = m-n;        
        for(int i=0; i<=diff; i++){
            int sum = 0;
            for(int j=0; j<n; j++){
                sum += a[j] * b[j+i];
            }
            mx = max(mx,sum);
        }
    }

    cout << mx << "\n";

}
















