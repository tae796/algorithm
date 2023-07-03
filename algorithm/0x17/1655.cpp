#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    priority_queue<int> max_pq;
    priority_queue<int, vector<int>, greater<>> min_pq;
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(max_pq.size() ==0) max_pq.push(tmp);
        else if(tmp > max_pq.top()){
            if(min_pq.size() == 0) min_pq.push(tmp);
            else{
                if(tmp<=min_pq.top()) max_pq.push(tmp);
                else min_pq.push(tmp);
            }
        }
        else max_pq.push(tmp);
        
        if(max_pq.size()+1 == min_pq.size()){
            max_pq.push(min_pq.top());
            min_pq.pop();
        }

        if(min_pq.size()+2 <= max_pq.size()){
            min_pq.push(max_pq.top());
            max_pq.pop();
        }

        cout << max_pq.top() << "\n";
    }
}