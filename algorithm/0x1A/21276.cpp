#include <bits/stdc++.h>
using namespace std;

vector<string> vs;
unordered_map<string,int> mmap;

vector<int> v[1005],vans[1005];
int dg[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        vs.push_back(a);
    }
    sort(vs.begin(),vs.end());
    for(int i=0; i<n; i++){
        mmap[vs[i]] = i+1;
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        string a,b;
        cin >> b >> a;
        v[mmap[a]].push_back(mmap[b]);
        dg[mmap[b]]++;
    }

    vector<int> ans;
    queue<int> q;
    for(int i=1; i<=n; i++){
        if(dg[i]==0) {
            ans.push_back(i);
            q.push(i);
        }
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nx : v[cur]){
            dg[nx]--;
            if(dg[nx]==0){
                q.push(nx);
                vans[cur].push_back(nx);
            }
        }
    }

    for(int i=1; i<=n; i++) sort(vans[i].begin(),vans[i].end());


    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++){
        cout << vs[ans[i]-1] << " ";
    }
    cout << "\n";

    for(int i=0; i<n; i++){
        cout << vs[i] << " ";
        cout << vans[mmap[vs[i]]].size() << " ";
        for(int j=0; j<vans[mmap[vs[i]]].size(); j++) cout << vs[vans[mmap[vs[i]]][j]-1] << " ";
        cout << "\n";
    }

    
}