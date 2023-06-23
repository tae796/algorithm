#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<string> set;

    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++){
        string tmp = "";
        for(int j=i; j<a.size(); j++){
            tmp += a[j];
            set.insert(tmp);
        }
    }

    cout << set.size() << "\n";

}