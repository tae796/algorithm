#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int vis[505];
vector<int> v[505];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    vis[1] = 0;
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nx : v[cur]){
            if(vis[nx]) continue;
            q.push(nx);
            vis[nx] = vis[cur]+1;
        }
    }
    
    int ans = 0;

    for(int i=2; i<=n; i++){
        if(vis[i]<=2 && vis[i] !=0) ans++;
    }

    cout << ans <<"\n";
    
}