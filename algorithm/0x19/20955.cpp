#include <bits/stdc++.h>
using namespace std;

vector<int> v[100005];
int parent[100005];
int vis[100005];

int main(){
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

    int ans = 0;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        queue<int> q;
        if(vis[i]) continue;
        q.push(i);
        vis[i] = 1;
        cnt++;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v[cur]){
                if(parent[cur] == nx) continue;
                if(vis[nx]){
                    ans++;
                    continue;
                }
                vis[nx] = 1;
                parent[nx] = cur;
                q.push(nx);
            }
        }
    }

    

    cout << cnt-1 + m + cnt-1 - n +1 <<"\n";

    

}