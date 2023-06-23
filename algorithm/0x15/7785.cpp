#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<string> ans;

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string a,b;
        cin >> a >> b;
        if(b == "enter") ans.insert(a);
        else ans.erase(a);
    }
    vector<string> a(ans.begin(),ans.end());
    sort(a.begin(),a.end(),greater<string>());
    for(auto e : a) cout << e << "\n";
}