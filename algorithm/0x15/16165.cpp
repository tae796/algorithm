#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    unordered_set<string> set[n];
    unordered_map<string,int> map;
    string gg[100];

    for(int i=0; i<n; i++){
        string a;
        int b;
        cin >> a >> b;
        map[a] = i;    
        gg[i] = a;
        for(int j=0; j<b; j++){
            string tmp;
            cin >> tmp;
            set[i].insert(tmp);
        }
    }


    for(int i=0; i<m; i++){
        string a;
        int b;
        cin >> a >> b;
        
        if(b==1){
            for(int j=0; j<n; j++){
                if(set[j].find(a) != set[i].end()){
                    cout << gg[j] << "\n";
                }
            }
        }
        else{
            vector<string> ans(set[map[a]].begin(), set[map[a]].end());
            sort(ans.begin(), ans.end());
            for(auto s : ans) cout << s << "\n";
        }

    }


}