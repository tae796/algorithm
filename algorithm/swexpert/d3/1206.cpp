#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int ans = 0;
    // if(v[0]>v[1] && v[0]>v[2]) ans += v[0] - max(v[1],v[2]);
    

    // if(v[1]>v[2] && v[1]>v[3] && v[1] > v[0]) ans += v[1] - max({v[0],v[2],v[3]});
    

    for(int i=2; i<n-2; i++){
        if(v[i]>v[i-2] && v[i]>v[i-1] && v[i]>v[i+1] && v[i]>v[i+2]){
            ans += v[i] - max({v[i-2],v[i-1],v[i+1],v[i+2]});
        }
    }

    // if(v[n-2]>v[n-1] && v[n-2]>v[n-3] && v[n-2] > v[n-4]) ans += v[n-2] - max({v[n-1],v[n-3],v[n-4]});
    

    // if(v[n-1]>v[n-2] && v[n-1]>v[n-3]) ans += v[n-1] - max(v[n-2],v[n-3]);
    

    cout << ans << "\n";

}