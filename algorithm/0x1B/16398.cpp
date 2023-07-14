#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[1005];
int vis[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
long long ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int k;
            cin >> k;
            if(k==0) continue;
            v[i].push_back({j,k});
        }
    }

    vis[1] = 1;
    for(auto nx : v[1]) pq.push({nx.second,nx.first});

    int cnt = 0;
    while(cnt != n-1){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(vis[cur.second]) continue;
        ans += cur.first;
        vis[cur.second] = 1;
        cnt++;
        for(auto nx : v[cur.second]){
            pq.push({nx.second,nx.first});
        }
    }

    cout << ans << "\n";
}