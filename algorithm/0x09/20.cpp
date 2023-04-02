#include <bits/stdc++.h>
using namespace std;

int board[200002];
int vis[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << "\n";
        return 0;
    }

    queue<int> q;
    vis[a] = 1;
    q.push(a);
    
    


    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int dir=0; dir<3; dir++){
            if(dir==2){
                int nx = cur + 1;
                if(nx<0 || nx > 200000) continue;
                if(vis[nx]) continue;
                if(nx == b){
                    cout << vis[cur] << "\n";
                    return 0;
                }
                vis[nx] = vis[cur] +1;
                q.push(nx);
            }
            else if(dir==1){
                int nx = cur - 1;
                if(nx<0 || nx > 200000) continue;
                if(vis[nx]) continue;
                if(nx == b){
                    cout << vis[cur] << "\n";
                    return 0;
                }
                vis[nx] = vis[cur] +1;
                q.push(nx);
            }
            else if(dir==0){
                int nx = 2 * cur ;
                if(nx<0 || nx > 200000) continue;
                if(vis[nx]) continue;
                if(nx == b){
                    cout << vis[cur]-1 << "\n";
                    return 0;
                }
                vis[nx] = vis[cur];
                q.push(nx);
            }
        }
    }
    

}