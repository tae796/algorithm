#include <bits/stdc++.h>
using namespace std;

int stu[1005][1005];
int add[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> stu[i][j];
    }
    
    for(int i=0; i<n; i++) sort(stu[i],stu[i]+m);

    int ans = 1000000005;
    int min_index=0;
    while(1){
        int mn = 1000000005;
        int mx = 0;
        
        if(add[min_index] == m) break;
        for(int i=0; i<n; i++){
            if(stu[i][add[i]] < mn){
                mn = min(mn,stu[i][add[i]]);
                min_index = i;
            }
            if(stu[i][add[i]] > mx){
                mx = max(mx,stu[i][add[i]]);
            }
        }
        add[min_index]++;
        ans = min(ans,mx-mn);
        
    }

    cout << ans << "\n";
}