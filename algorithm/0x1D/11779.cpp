#include<bits/stdc++.h>
using namespace std;

int d[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int pre[1005];
vector<pair<int,int>> v[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    fill(d,d+n+1,100000005);

    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({c,b});
    }

    int st,en;
    cin >> st >> en;
    d[st] = 0;
    pq.push({d[st],st});

    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.second] != cur.first) continue;
        for(auto nx : v[cur.second]){
            if(d[nx.second] <= d[cur.second] + nx.first) continue;
            d[nx.second] = d[cur.second] + nx.first;
            pre[nx.second] = cur.second;
            pq.push({d[nx.second],nx.second});
        }
    }

    cout << d[en] << "\n";
    int tmp = en;
    vector<int> ans;
    while(tmp != st){
        ans.push_back(tmp);
        tmp = pre[tmp];
    }
    ans.push_back(st);
    cout << ans.size() << "\n";
    for(int i=ans.size()-1; i>=0; i--) cout << ans[i] << " ";
    cout << "\n";
}