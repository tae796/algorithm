#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    deque<int> d;
    int cnt = 0;
    for(int i=0; i<7; i++) {
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
        if(tmp == 1) cnt++;
        
    }


    if(cnt == 7){
        cout << n << "\n";
    }
    else{
        int mn = 10000000;
        
        for(int i=0; i<7; i++){
            int aaa = n;
            int ans = 0;
            int tmp = 0;
            if(cnt == 1){
            tmp = aaa-1;
            ans = tmp*7;
            aaa = 1;
            }
            else {
                if(aaa>=cnt){
                    tmp = aaa/cnt -1;
                    ans = tmp*7;
                    aaa = aaa%cnt + cnt;
                }
            }
            while(aaa > 0){
                if(d[ans%7] == 1) aaa--;
                ans++;
            }

            mn = min(mn,ans);
            tmp = d.front();
            d.pop_front();
            d.push_back(tmp);
        }

        cout << mn << "\n";
    }

        

   



}