#include <bits/stdc++.h>
using namespace std;

int vis[105];
vector<int> v[105];

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
    vis[1] = 1;
    int ans = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nx : v[cur]){
            if(vis[nx]) continue;
            q.push(nx);
            vis[nx] = 1;
            ans++;
        }
    }

    cout << ans << "\n";

}