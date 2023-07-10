#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    for(int qq=0; qq<tc; qq++){
        vector<int> v[20002];
        int vis[20002];
        int flag = 0;
        memset(vis,0,sizeof(vis));
        int n,m;
        cin >> n >> m;
        for(int i=0; i<m; i++){
            int a,b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        queue<int> q;

        for(int i=1; i<=n; i++){
            if(vis[i]) continue;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for(auto nx : v[cur]){
                    if(vis[cur] == vis[nx]) {
                        flag = 1;
                        continue;
                    }
                    if(vis[nx]) continue;
                    if(vis[cur]==1) vis[nx] = 2;
                    else if(vis[cur]==2) vis[nx] = 1;
                    q.push(nx);
                }
            }
        }
        
        if(flag) cout << "NO"<< "\n";
        else cout << "YES" << "\n";
    } 
}