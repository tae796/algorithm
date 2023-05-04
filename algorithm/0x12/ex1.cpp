#include <bits/stdc++.h>
using namespace std;


int func(int k){ //1이면 소수
    if(k==1) return 0;

    for(int i=2; i*i<=k; i++) if(k%i==0) return 0;

    return 1;
    
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans=0;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        ans += func(a);

    }

    cout << ans << "\n";


}