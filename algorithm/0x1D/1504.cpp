#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v[810];
int d[810];
int n,m;

long long func(int st,int en){
    fill(d,d+n+1,10000000);
    d[st] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({d[st],st});
    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.second] != cur.first) continue;
        for(auto nx : v[cur.second]){
            if(d[nx.second] <= d[cur.second] + nx.first) continue;
            d[nx.second] = d[cur.second] + nx.first;
            pq.push({d[nx.second],nx.second});
        }
    }
    return d[en];
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({c,b});
        v[b].push_back({c,a});
    }

    int a,b;
    cin >> a >> b;

    long long case1,case2;

    case1 = func(1,a) + func(a,b) + func(b,n);
    case2 = func(1,b) + func(b,a) + func(a,n);


    if(case1>=10000000 && case2>=10000000) cout << -1 << "\n";
    else cout << min(case1,case2) << "\n";

}