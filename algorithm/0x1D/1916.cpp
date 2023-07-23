#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[1005];
int d[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({c,b});
    }

    fill(d,d+n+1,100000003);

    int st,en;
    cin >> st >> en;
    d[st] = 0;
    pq.push({d[st],st});

    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.second] !=cur.first) continue;
        for(auto nx : v[cur.second]){
            if(d[nx.second] <= d[cur.second] + nx.first) continue;
            d[nx.second] = d[cur.second] + nx.first;
            pq.push({d[nx.second],nx.second});
        }
    }

    cout << d[en] << "\n";
}