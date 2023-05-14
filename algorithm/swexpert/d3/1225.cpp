#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 8;
    deque<int> d;

    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
    }
    int cnt=1;
    while(d.back() !=0){
        if(cnt == 6) cnt = 1;
        int tmp = d.front();
        d.pop_front();
        tmp -= cnt++;
        if(tmp<0) tmp = 0;
        d.push_back(tmp);
    }
    
    for(int i=0; i<n; i++) cout << d[i] << " ";
    cout << "\n";


}