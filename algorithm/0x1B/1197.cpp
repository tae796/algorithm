#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

vector<pair<int,int>> v[10005];
int vis[10005];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;

int main(){
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
    for(auto nx : v[1]) pq.push({nx.Y, 1, nx.X});

    int cnt = 0;
    int ans = 0;
    while(cnt != n-1){
        int a,b,c;
        tie(a,b,c) = pq.top();
        pq.pop();
        if(vis[c]) continue;
        ans += a;
        vis[c] = 1;
        cnt++;
        for(auto nx : v[c]) {
            if(vis[nx.X]==0) pq.push({nx.Y, b, nx.X});
        }
    }

    cout << ans << "\n";

    
}


//코스트가 제일 처음에 들어가야 sort가 됨