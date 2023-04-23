#include <bits/stdc++.h>
using namespace std;

vector<tuple<string,int,int,int>> v;

bool func(tuple<string,int,int,int> a, tuple<string,int,int,int> b){
    string c,c1;
    int x,y,z,x1,y1,z1;

    tie(c,x,y,z) = a;
    tie(c1,x1,y1,z1) = b;

    if(x!=x1) return x > x1;
    if(y!=y1) return y < y1;
    if(z!=z1) return z > z1;
    return c < c1;


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        int b,c,d;
        cin >> a >> b >> c >> d;
        v.push_back({a,b,c,d});
    }

    sort(v.begin(),v.end(),func);

    for(int i=0; i<v.size(); i++) cout << get<0>(v[i]) << "\n";
    
}