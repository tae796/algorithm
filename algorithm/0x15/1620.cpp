#include <bits/stdc++.h>
using namespace std;

string ans2[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string,int> ans;

    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        ans.insert({a,i+1});
        ans2[i+1] = a;
    }

    for(int i=0; i<m; i++){
        string a;
        cin >> a;
        
        if(ans[a] == 0){
            int tmp = stoi(a);
            cout << ans2[tmp] << "\n";
        }
        else cout << ans[a] << "\n";
    }
}