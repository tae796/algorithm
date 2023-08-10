#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> v[303];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p,m;
    cin >> p >> m;
    int end = 0;
    for(int i=0; i<p; i++){
        string a;
        int b;
        cin >> b >> a;

        if(end == 0) {
            v[0].push_back({a,b});
            end++;
            continue;
        }

        for(int j=0; j<=end; j++){
            if(v[j].empty()) {
                v[j].push_back({a,b});
                end++;
                break;
            }
            if( b > v[j][0].second+10 || b < v[j][0].second-10) continue; // 입장불가
            else{
                if(v[j].size()<m){ // 방 비어있음
                    v[j].push_back({a,b});
                    break;
                } 
                else continue;
            }
        }
        
    }
    for(int i=0; i<=end; i++){
        if(v[i].empty()) continue;
        sort(v[i].begin(),v[i].end());
        if(v[i].size() == m) cout << "Started!" << "\n";
        else cout << "Waiting!" << "\n";
        for(auto nx : v[i]) cout << nx.second << " " << nx.first << "\n";
    }

}