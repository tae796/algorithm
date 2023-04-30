#include <bits/stdc++.h>
using namespace std;
#define X first 
#define Y second

int board[1000000];
int vis[1000000];
int arr[3000000];
queue <pair<int,int>> q;
vector <int> v;
int ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;
    if(n == 1){
        cout << 0 << "\n";
        cout << 1 << "\n";
        return 0;
    }

    vis[n] = 1;
    q.push({n,0});
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<3; dir++){
            int dx = cur.X;
            if(dir==0 && dx%3==0){
                dx = dx/3;
            }
            else if (dir==1 && dx%2==0){
                dx = dx/2;
            }
            else if (dir==2){
                dx = dx-1;
            }
            if(vis[dx]) continue;
            if(dx==1){
                cout << cur.Y+1 << "\n";
                int ans = dx;
                while(ans!=n){
                    if(dir==0) ans = ans*3;
                    else if(dir==1) ans = ans*2;
                    else if(dir==2) ans = ans+1;
                    v.push_back(ans);

                    while(ans!=n){
                        if(arr[ans]==0) ans = ans*3;
                        else if(arr[ans]==1) ans = ans*2;
                        else if(arr[ans]==2) ans = ans+1;
                        v.push_back(ans);
                    } 
                }
                for(int i=v.size()-1; i>=0; i--) cout << v[i] << " ";
                cout << dx << "\n";
                return 0;
            }
            vis[dx] = cur.Y+1;
            arr[dx] = dir;
            q.push({dx,cur.Y+1});
        }
    }

    
}

