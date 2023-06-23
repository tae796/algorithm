#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    

    int test_case;
    cin >> test_case;
    for(int q=0; q<test_case; q++){
        unordered_map<string,int> map;
        int tmp[100];
        fill(tmp,tmp+100,1);
        int kind = 0;
        int n;
        cin >> n;

        for(int i=0; i<n; i++){
            string a,b;
            cin >> a >> b;
            
            if(map.find(b) != map.end()){ // find 성공
                int tmp = map[b];
                map[b] = tmp+1;
            }
            else{
                map[b] = 1;
                kind++;
            }
        }
        
        if(kind == 1) cout << n << "\n";
        else{
            int sum = 1;
            for(auto e : map){
                sum *= (e.second+1);
            }
            sum -=1;

            cout << sum << "\n";
        }
    }

}