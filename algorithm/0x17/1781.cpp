#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<pair<int,int>> v;

    for(int i=0; i<n; i++){
        int d,c;
        cin >> d >> c;
        v.push_back({d,c});
    }

    sort(v.begin(),v.end());
    int cur = 0;
    int ans = 0;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i].first == cur) continue;
        cur = v[i].first;
        
        if(v[i+1].second>v[i].second){
            ans += v[i+1].second;
        }
        else{
            ans += v[i].second;
        }
    }

    cout << ans << "\n";
}