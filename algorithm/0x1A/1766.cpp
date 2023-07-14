#include <bits/stdc++.h>
using namespace std;

vector<int> v[33333];
int dg[33333];
vector<int> ans;
priority_queue<int, vector<int>,greater<int>> pq;

int main() {
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

    for(int i=1; i<=n; i++){
        if(dg[i]==0) pq.push(i);
    }

    while(!pq.empty()){
        int cur = pq.top();
        pq.pop();
        ans.push_back(cur);
        for(auto nx : v[cur]){
            dg[nx]--;
            if(dg[nx]==0) pq.push(nx);
        }
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";

}