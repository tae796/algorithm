#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

vector<pair<int,int>> v[1005];
int vis[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n-1; i++){
        int a,b,l;
        cin >> a >> b >> l;
        v[a].push_back({b,l});
        v[b].push_back({a,l});
    }

    for(int i=0; i<m; i++){
        memset(vis,0,sizeof(vis));
        int a,b;
        cin >> a >> b;
        queue<int> q;
        q.push(a);
        vis[a] = 0;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v[cur]){
                if(vis[nx.first]) continue;
                if(nx.first == b){
                    vis[nx.first] = vis[cur] + nx.second;
                    continue;
                }
                vis[nx.first] = vis[cur] + nx.second;
                q.push(nx.first);
            }
        }

        cout << vis[b] << "\n";
    }
}