#include<bits/stdc++.h>
using namespace std;

vector<int> v[33000];
int dg[33000];
vector<int> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        dg[b]++;
    }
    
    queue<int> q;
    for(int i=1; i<=n; i++){
        if(dg[i]==0) q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        ans.push_back(cur);
        for(auto nx : v[cur]){
            dg[nx]--;
            if(dg[nx]==0) q.push(nx);
        }
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
} 