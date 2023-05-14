#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,string>> v;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        if(a == "ZRO") v.push_back({0,a});
        else if(a == "ONE") v.push_back({1,a});
        else if(a == "TWO") v.push_back({2,a});
        else if(a == "THR") v.push_back({3,a});
        else if(a == "FOR") v.push_back({4,a});
        else if(a == "FIV") v.push_back({5,a});
        else if(a == "SIX") v.push_back({6,a});
        else if(a == "SVN") v.push_back({7,a});
        else if(a == "EGT") v.push_back({8,a});
        else if(a == "NIN") v.push_back({9,a});
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++) cout << v[i].Y << " " ;
    cout << "\n";
}