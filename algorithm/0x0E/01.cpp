#include <bits/stdc++.h>
using namespace std;

vector<int> v;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}