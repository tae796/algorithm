#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int tmp = i;
        while(tmp>=5){
            if(tmp%5==0) {
                ans++;
                tmp/=5;
            }
            else break;
        }
    }

    cout << ans << "\n";
}


// 500은 0이 3개가 들어가네?