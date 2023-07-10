#include <bits/stdc++.h>
using namespace std;

int vis[105];
vector<int> v[105];
int ans[105][105];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int tmp;
            cin >> tmp;
            if(tmp) v[i].push_back(j);
        }
    }

    queue<int> q;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            memset(vis,0,sizeof(vis));
            q.push(i);
            //vis[i] = 1;
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for(auto nx : v[cur]){
                    if(vis[nx]) continue;
                    if(nx == j) {
                        ans[i][j] = 1;
                        continue;
                    }
                    q.push(nx);
                    vis[nx] = 1;
                }
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

}