#include<bits/stdc++.h>
using namespace std;

int stu[1005];
int d[1005][1005];
vector<pair<int,int>> v[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,en;
    cin >> n >> m >> en;

    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({c,b});
    }



    for(int i=1; i<=n; i++){
        int cnt = 0;
        int st = i;
        fill(d[i],d[i]+n+1,10000000);
        d[i][st] = 0;
        pq.push({d[i][st],st});
        while(!pq.empty()){
            pair<int,int> cur = pq.top();
            pq.pop();
            if(d[i][cur.second] != cur.first) continue;
            for(auto nx : v[cur.second]){
                if(d[i][nx.second] <= d[i][cur.second] + nx.first) continue;
                d[i][nx.second] = d[i][cur.second] + nx.first;
                pq.push({d[i][nx.second],nx.second});
            
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        stu[i] = d[i][en]+d[en][i];
    }
    cout << *max_element(stu+1,stu+n+1) << "\n";
}


//함수로 따로 빼고 st랑 en을 넘겨주고 하는게 훨씬 쉬울듯?