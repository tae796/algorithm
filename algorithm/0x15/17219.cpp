#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<string,string> map;

    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;
        map[a] = b;
    }

    for(int i=0; i<m; i++){
        string a;
        cin >> a;
        cout << map[a] << "\n";
    }
}