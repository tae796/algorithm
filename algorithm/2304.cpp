#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int mx;
int ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        mx = max(mx,b);
        v.push_back({a,b});
    }

    sort(v.begin(),v.end());

    int h = v[0].second;
    int w = v[0].first;
    for(int i=0; i<v.size()-1; i++){
        if(h == mx) break;
        if(v[i+1].second > h){
            ans += h*(v[i+1].first - w);
            h = v[i+1].second;
            w = v[i+1].first;
        }
        else{

        }
    }

    h = v[v.size()-1].second;
    w = v[v.size()-1].first;
    for(int i=v.size()-1; i>0; i--){
        if(h == mx) break;
        if(v[i-1].second > h){
            ans += h*(w-v[i-1].first);
            h = v[i-1].second;
            w = v[i-1].first;
        }
        else{
            
        }
    }
    int cnt = 0;
    vector<int> vh;
    for(int i=0; i<v.size(); i++){
        if(v[i].second==mx) {
            vh.push_back(v[i].first);
            cnt++;
        }
    }
    if(cnt == 1){
        cout << ans+mx << "\n";
    }
    else{
        int a = vh[vh.size()-1]+1 - vh[0];
        cout << ans+ a*mx << "\n"; 
    }

    
}