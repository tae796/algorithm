#include<bits/stdc++.h>
using namespace std;

vector<pair<int,long long>> v[1005];
vector<pair<int,int>> tmp;
priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
int vis[1005];
int cnt;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        tmp.push_back({a,b});
    }

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;

        if(vis[a-1] && vis[b-1]) continue;
        vis[a-1] = 1;
        vis[b-1] = 1;
        cnt++;
    }

    for(int i=0; i<tmp.size(); i++){
        for(int j=i+1; j<tmp.size(); j++){
            if(vis[i] && vis[j]) continue;
            int dx = tmp[j].first - tmp[i].first;
            int dy = tmp[j].second - tmp[i].second;
            long long len = ((long long)dx)*dx + ((long long)dy)*dy;
            v[i].push_back({j,len});
            v[j].push_back({i,len});
        }
    }


    for(int i=0; i<n; i++){
        if(vis[i]) {
            for(auto nx : v[i]) {
                if(vis[nx.first]) continue;
                pq.push({nx.second,nx.first});
            }
        }
    }
    
    long long ans = 0;

    while(cnt != n-1){
        pair<long long,int> cur = pq.top();
        pq.pop();
        if(vis[cur.second]) continue;
        vis[cur.second] = 1;
        cnt++;
        //ans += (cur.first);
        ans += sqrt(cur.first);
        for(auto nx : v[cur.second]){
            if(vis[nx.first]) continue;
            pq.push({nx.second,nx.first});
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << ans << "\n";

}