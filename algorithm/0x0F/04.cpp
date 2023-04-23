#include <bits/stdc++.h>
using namespace std;

vector<string> v;

bool func(string& a, string& b){
    if(a.size() != b.size()) return a.size() < b.size();

    return a < b;

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end(),func);

    for(int i=0; i<v.size(); i++) {
        if(i==0) cout << v[i] << "\n";
        else {
            if(v[i-1] == v[i]) continue;
            cout << v[i] << "\n";
        }
    }
}