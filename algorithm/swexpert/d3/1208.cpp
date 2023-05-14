#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<100; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    for(int i=0; i<n; i++){
        int mx = max_element(v.begin(),v.end()) - v.begin();
        int mn = min_element(v.begin(),v.end()) - v.begin();
        v[mx]--;
        v[mn]++;
    }

    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());

    cout << mx - mn << "\n";
}