#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[20005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int d[20005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,st;
    cin >> n >> m >> st;

    fill(d,d+n+1,20000000);


    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({c,b});
    }

    d[st] = 0;
    pq.push({d[st],st});

    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(cur.first != d[cur.second]) continue;
        
        for(auto nx : v[cur.second]){
            if(d[nx.second] <= d[cur.second] + nx.first) continue;
            d[nx.second] = d[cur.second] + nx.first;
            pq.push({d[nx.second],nx.second});
        }
    }

    for(int i=1; i<=n; i++){
        if(d[i] == 20000000) cout << "INF" << "\n";
        else cout << d[i]<< "\n";
    }


}