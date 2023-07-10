#include <bits/stdc++.h>
using namespace std;

int vis[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    
    cin >> n >> m;
    vector<int> v[1005];
    queue<int> q;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int ans = 0;

    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        q.push(i);
        ans++;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v[cur]){
                if(vis[nx]) continue;
                q.push(nx);
                vis[nx] = 1;
            }
        }
    }

    cout << ans << "\n";

}


//양방향 그래프 생각할 것