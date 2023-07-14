#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

vector<pair<int,int>> v[305];
vector<pair<int,int>> self;
int vis[305];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        self.push_back({i,a});
    } 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int a;
            cin >> a;
            v[i].push_back({j,a});
        }
    }

    sort(self.begin(),self.end());
    
    int start = self[self.size()-1].X;
    int ans = self[self.size()-1].Y;

    vis[start] = 1;
    for(auto nx : v[start]) pq.push({nx.Y, start, nx.X});
    

    int cnt = 0;

    while(cnt != n-1){
        int a,b,c;
        tie(a,b,c) = pq.top();
        pq.pop();
        if(vis[c]) continue;
        ans += min(a,self[c].Y);
        vis[c] = 1;
        cnt++;
        for(auto nx : v[c]) {
            if(vis[nx.X] == 0) pq.push({nx.Y, b, nx.X});
        }
    }

    cout << ans << "\n";
    
}