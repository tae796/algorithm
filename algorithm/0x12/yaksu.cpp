#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i=0; i*i<n; i++){
        if(n%i==0) v.push_back(i);
    }
    for(int i=(int)v.size()-1; i>=0; i--){
        if(v[i]*v[i] == n) continue;
        v.push_back(n/v[i]);
    }
    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}