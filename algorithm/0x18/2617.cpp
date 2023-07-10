#include<bits/stdc++.h>
using namespace std;

vector<int> v[105],v1[105];
int vis[105],vis1[105];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v1[b].push_back(a);
    }
    int ans = 0;

    for(int i=1; i<=n; i++){
        queue<int> q;
        int cnt = 0;
        memset(vis,0,sizeof(vis));
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v[cur]){
                if(vis[nx]) continue;
                q.push(nx);
                vis[nx] = 1;
                cnt++;
            }
        }

        if(cnt>=((n+1)/2)) ans++;
    }

    for(int i=1; i<=n; i++){
        queue<int> q;
        int cnt = 0;
        memset(vis,0,sizeof(vis));
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v1[cur]){
                if(vis[nx]) continue;
                q.push(nx);
                vis[nx] = 1;
                cnt++;
            }
        }

        if(cnt>=((n+1)/2)) ans++;
    }

    cout << ans << "\n";
}