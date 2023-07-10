#include<bits/stdc++.h>
using namespace std;

int vis[55];
vector<int> v[55];
int ans[55];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(1){
        int a,b;
        cin >> a >> b;
        if(a==-1 && b==-1) break;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    
    
    for(int i=1; i<=n; i++){
        fill(vis,vis+n+1,-1);
        queue<int> q;
        q.push(i);
        vis[i] = 0;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nx : v[cur]){
                if(vis[nx]!=-1) continue;
                vis[nx] = vis[cur]+1;
                q.push(nx);
            }
        }

        ans[i] = *max_element(vis+1,vis+n+1);
        if(ans[i] == 0) ans[i] = 100;
        
    }

    int mn = *min_element(ans+1,ans+n+1);

    int cnt = 0;
    vector<int> ans_v;
    for(int i=1; i<=n; i++) {
        if(ans[i] == mn) {
            cnt++;
            ans_v.push_back(i);
        }
    }

    cout << mn << " " << cnt << "\n";
    for(auto e : ans_v) cout << e << " ";
    cout << "\n";
}


//친구가 아예 없는 경우가 있어서 틀린듯?