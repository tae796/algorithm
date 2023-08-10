#include<bits/stdc++.h>
using namespace std;

vector<tuple<int,int,int>> v;
int vis[13];
int ans = 0;
int n,d;
int func(int cur, int dis){
    if(cur == d) return dis;
    if(cur>d) return 10001;
    int min = 10001;

    for(int i=0; i<n; i++){
        int a,b,c;
        tie(a,b,c) = v[i];
        int tmp = func(a,)
        if(pos)
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> d;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }

    sort(v.begin(),v.end());

    func(0);



}