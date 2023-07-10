#include <bits/stdc++.h>
using namespace std;

vector<int> v[100005];
int p[100005];
long long ans[100005];

void func(int a){
    if(p[a] !=-1)
        ans[a] += ans[p[a]];
    
    for(auto nx : v[a]) func(nx);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        p[i] = a;
        if(a==-1) continue;
        v[a].push_back(i);
    }

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        ans[a] += b;
    }
    func(1);

    for(int i=1; i<=n; i++) cout << ans[i] << " ";
}