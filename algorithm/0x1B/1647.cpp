#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[100005];
vector<int> cost;
int vis[100005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    vis[1] = 1;
    for(auto nx : v[1]) pq.push({nx.second,nx.first});

    int cnt = 0;
    long long ans = 0;

    while(cnt != n-1){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(vis[cur.second]) continue;
        cnt++;
        ans += cur.first;
        cost.push_back(cur.first);
        vis[cur.second] = 1;
        for(auto nx : v[cur.second]){
            if(vis[nx.first]) continue;
            pq.push({nx.second,nx.first});
        }
    }
    sort(cost.begin(),cost.end());
    ans -= cost[cost.size()-1];

    cout << ans << "\n";

}