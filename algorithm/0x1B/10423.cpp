#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[1005];
int vis[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,k;
    cin >> n >> m >> k;
    
    for(int i=0; i<k; i++){
        int a;
        cin >> a;
        vis[a] = 1;
    }

    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    for(int i=1; i<=n; i++){
        if(vis[i]){
            for(auto nx : v[i]) {
                if(vis[nx.first]) continue;
                pq.push({nx.second,nx.first});
            }
        }
    }

    int cnt = k-1;
    int ans = 0;

    while(cnt != n-1){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(vis[cur.second]) continue;
        vis[cur.second] = 1;
        cnt++;
        ans += cur.first;
        for(auto nx : v[cur.second]){
            if(vis[nx.first]) continue;
            pq.push({nx.second,nx.first});
        }
    }

    cout << ans << "\n";
}