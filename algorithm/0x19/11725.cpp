#include <bits/stdc++.h>
using namespace std;

int parent[100005];
vector<int> v[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    q.push(1);

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nx : v[cur]){
            if(parent[cur]==nx) continue;
            q.push(nx);
            parent[nx] = cur;
        }
    }

    for(int i=2; i<=n; i++){
        cout << parent[i] << "\n";
    }

}