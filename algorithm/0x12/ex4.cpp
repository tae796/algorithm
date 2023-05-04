#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    while(k--){
        int flag=0;
        int m,n,x,y;
        cin >> m >> n >> x >> y;
        if(x==m) x=0;
        if(y==n) y=0;
        for(int i=x; i<=m*n; i+=m){
            if(i%n==y) {
                if(i==0) continue;
                cout << i << "\n";
                flag = 1;
                break;
            }
        }
        if(flag==0) cout << -1 << "\n";
    }

}