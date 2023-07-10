#include <bits/stdc++.h>
using namespace std;

int vis[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,start;
    cin >> n >> m >> start;
    vector<int> v[1005];
    queue<int> q;
    stack<int> s;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
    
    s.push(start);
    while(!s.empty()){
        int cur = s.top();
        s.pop();
        if(vis[cur]) continue;
        vis[cur] = 1;
        cout << cur << " ";
        for(int i=v[cur].size()-1; i>=0; i--){
            int nx = v[cur][i];
            if(vis[nx]) continue;
            s.push(nx);
        }
    }

    cout << "\n";

    memset(vis,0,sizeof(vis));
    q.push(start);
    vis[start] = 1;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(auto nx : v[cur]){
            if(vis[nx]) continue;
            q.push(nx);
            vis[nx] = 1;
        }
    }

    cout << "\n";




}