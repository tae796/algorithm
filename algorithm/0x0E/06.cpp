#include <bits/stdc++.h>
using namespace std;

vector<tuple<int,int,string>> v;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        string b;
        cin >> a >> b;
        v.push_back({a,i,b});
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<v.size(); i++){
        cout << get<0>(v[i]) << " "<< get<2>(v[i]) << "\n";
    }

}

//해설지 람다 함수 확인하기