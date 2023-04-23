#include <bits/stdc++.h>
using namespace std;

vector<int> v,v1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m;
    cin >> t;
    while(t--){
        int sum = 0;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        for(int i=0; i<m; i++){
            int b;
            cin >> b;
            v1.push_back(b);
        }

        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        
        
        for(int i=n-1; i>=0; i--){
            while(v[i]<=v1.back()){
                if(v[i] <= v1.back()){
                    v1.pop_back();
                }
            }
            sum+=v1.size();
        }
    
        cout << sum << "\n";
        v.clear();
        v1.clear();
    }


}


//vector.size()는 0이하로 내려갈 경우 쓰레기값이 들어간다