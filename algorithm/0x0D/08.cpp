#include <bits/stdc++.h>
using namespace std;

int bridge[110];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(bridge,0,sizeof(bridge));
    int n,w,l;

    cin >> n >> w >> l;
    deque<int> d;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
    }


    int tot = 0;
    int ans = 0;
    bridge[0] = d.front();
    tot +=d.front();
    d.pop_front();
    while(1){
        ans++;
        if(tot==0 && d.empty()) break;
        if(bridge[w-1] !=0){
            tot -=bridge[w-1];
            bridge[w-1] = 0;
        }
        for(int i=w-1; i>0; i--) bridge[i] = bridge[i-1];
        bridge[0] = 0;

        if(!d.empty()){
            int cur = d.front();
            if(tot+cur>l) continue;
            else{
                bridge[0] = cur;
                tot +=d.front();
                d.pop_front();
            }
        }
        
    }

    cout << ans << "\n";
    


}