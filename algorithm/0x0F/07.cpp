#include <bits/stdc++.h>
using namespace std;

vector<string> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++){
        v.push_back(a.substr(i,a.size()-i));
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";


}

//자기도 접미사 포함인지 몰랐음