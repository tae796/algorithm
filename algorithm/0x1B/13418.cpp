#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[1005];
int vis[1005];
priority_queue<pair<int,int>> pq;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq1;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    int height = 0;
    cin >> n >> m;
    for(int i=0; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    
    vis[0] = 1;
    for(auto nx : v[0]) pq.push({nx.second,nx.first}); // 최소

    int cnt = 0;
    int mn = 0;
    while(cnt != n){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(vis[cur.second]) continue;
        vis[cur.second] = 1;
        cnt++;
        if(cur.first == 0) height++;

        for(auto nx : v[cur.second]){
            if(vis[nx.first]) continue;
            pq.push({nx.second,nx.first});
        }
    }
    mn += height*height;


    cnt = 0;
    height = 0;
    int mx = 0;
    memset(vis,0,sizeof(vis));

    vis[0] = 1;
    for(auto nx : v[0]) pq1.push({nx.second,nx.first}); // 최대

    while(cnt != n){
        pair<int,int> cur = pq1.top();
        pq1.pop();
        if(vis[cur.second]) continue;
        vis[cur.second] = 1;
        cnt++;
        if(cur.first == 0) height++;
        for(auto nx : v[cur.second]){
            if(vis[nx.first]) continue;
            pq1.push({nx.second,nx.first});
        }
    }
    mx += height*height;

    cout << mx-mn << "\n";


    
}


//0번에서 출발했어야함, 그리고 0번에서 출발했기 때문에 cnt는 n-1이 아닌 n으로