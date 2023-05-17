#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;

    int arr[5] = {1,4,9,121,484};

    int ans = 0;
    for(int i=0; i<5; i++){
        if(arr[i]>=a && arr[i]<=b) ans++;
    }

    cout << ans << "\n";
}