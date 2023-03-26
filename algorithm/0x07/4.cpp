#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    int min;
    cin >> a >> b;
    deque<int> d,d1,res; //d1 -> sort된거, d-> 일반적인거
    vector<int> v;


    for(int i=0; i<b; i++){
        int c;
        cin >> c;
        d.push_back(c);
        d1.push_back(c);
        sort(d1.begin(),d1.end());
        min = d1.front();
        res.push_back(min);
        
    }
    

    for(int i=b; i<a; i++){
        int c;
        cin >> c;
        if(min >= c) {
            min = c;
        
            //d1.push_front(c);
        }
        else if(d.front() == min){
            d1.pop_front();
            d1.push_back(c);
        
            sort(d1.begin(),d1.end());
            min = d1.front();
        }
        else{
        
            d1.push_back(c);
            sort(d1.begin(),d1.end());
        }
        d.pop_front();
        d.push_back(c);
        res.push_back(min);
        
    }

    for(auto i : res) cout << i << ' ';



}


//1. 이중포문이면 시간초과인거 아는데 해보고싶었음
//2. 시간초과가 또남...