#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

vector<pair<int,int>> v;

bool func(pair<int,int> a, pair<int,int> b){
    return a.Y > b.Y;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,c;
    cin >> n >> c;

    for(int i=0; i<n; i++){
        int a, flag = 0;
        cin >> a;
        for(int j=0; j<v.size(); j++){
            if(a == v[j].X) {
                v[j].Y = v[j].Y+1;
                flag = 1;
            }
        }
        if(flag == 0) v.push_back({a,1});
    }
    
    stable_sort(v.begin(),v.end(),func);

    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[i].Y; j++) cout << v[i].X<< " ";
    }

}