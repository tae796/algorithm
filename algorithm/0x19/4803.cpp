#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 0;
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0) break;
        tc++;
        vector<int> v[505];
        int vis[505];
        int parent[505];
        memset(vis,0,sizeof(vis));
        memset(parent,0,sizeof(parent));
        for(int i=0; i<m; i++){
            int a,b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        queue<int> q;
        int ans = 0;
        for(int i=1; i<=n; i++){
            int flag = 0;
            if(vis[i]) continue;
            q.push(i);
            vis[i] = 1;
            ans++;
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for(auto nx : v[cur]){
                    if(parent[cur]==nx) continue;
                    if(vis[nx]){
                        flag = 1;
                        continue;
                    }
                    q.push(nx);
                    vis[nx] = 1;
                    parent[nx] = cur;

                }
            }
            if(flag) ans--;
        }

        if(ans == 0) cout << "Case " << tc << ": No trees."<<"\n";
        else if(ans==1) cout << "Case " << tc << ": There is one tree." <<"\n";
        else if(ans>1) cout << "Case " << tc << ": A forest of " << ans << " trees."<<"\n";
        
    }
}
