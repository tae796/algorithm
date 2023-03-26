#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long max = 0;
    long long min = 1000000001;
    long long tmp;
    stack<int> s;
    while(1){
        int a;
        if(a == 0) break;
        
        for(int i=0; i<a; i++){
            int b;
            cin >> b;
            if(max < b) b = max;
            if(min > b) b = min;
            if(i==0) s.push(b);
            else{
                
            }

        }
    }
}