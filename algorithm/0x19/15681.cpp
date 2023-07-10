#include<bits/stdc++.h>
using namespace std;

vector<int> v[100005];
int parent[100005];
int child[100005];
vector<int> ch[100005];
int vis[100005];
int ans[100005];


void func(int a){
    for(auto b : ch[a]){
        func(b);
        ans[a] += ans[b];
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int n,r,query;
    cin >> n >> r >> query;
    fill(ans+1,ans+n+1,1);
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b ;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<int> q;
    q.push(r);
    vis[r] = 1;
    parent[r] = -1;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nx : v[cur]){
            if(parent[cur]==nx) continue;
            parent[nx] = cur;
            child[cur]++;
            ch[cur].push_back(nx);
            vis[nx] = 1;
            q.push(nx);
        }
    }

    func(r);

    for(int i=0; i<query; i++){
        int a;
        cin >> a;
        cout << ans[a] << "\n";
    }

}