#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    

    int tc;
    cin >> tc;
    for(int q=0; q<tc; q++){
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int n;
        cin >> n;

        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            pq.push(tmp);
        }


        
        long long ans = 0;
        while(pq.size()>1){
            long long sum = 0;
            sum += pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            ans += sum;
            pq.push(sum);
        }

        cout << ans << "\n";
    }
    
}