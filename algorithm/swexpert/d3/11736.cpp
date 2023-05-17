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
    for(int i=1; i<v.size()-1; i++){
        if(v[i] == max({v[i-1],v[i],v[i+1]})) continue;
        if(v[i] == min({v[i-1],v[i],v[i+1]})) continue;
        else ans++;
    }

    cout << ans << "\n";
}