#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int dg[1005];
vector<int> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    int cnt=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        int tmp;
        for(int j=0; j<a; j++){
            cnt++;
            int b;
            cin >> b; 
            if(j==0) tmp = b;
            else{
                v[tmp].push_back(b);
                dg[b]++;
                tmp = b;
            }
        }
    }

    queue<int> q;
    for(int i=1; i<=n; i++){
        if(dg[i] == 0) q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        ans.push_back(cur);
        for(auto nx : v[cur]){
            dg[nx]--;
            if(dg[nx]==0) q.push(nx);
        }
    }


    if(*max_element(dg+1,dg+n+1) == 0){
        for(int i=0; i<n; i++) cout << ans[i] << "\n";
    }
    else{
        cout << 0 << "\n";
    }

}