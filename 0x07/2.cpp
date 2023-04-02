#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> d;
    int a,b,cnt = 0;
    cin >> a;
    cin >> b;
    
    for(int i=0; i<a; i++){
        d.push_back(i+1);
    }

    for(int i=0; i<b; i++){
        
        int c,tmp;
        cin >> c;

        if(d.front() == c) d.pop_front();
        else {
            for(int j=0; j<a; j++){
                if(d[j] == c){
                    tmp = j;
                    break;
                }
            }
            while(d.front() != c){
                if(tmp >= (d.size()/2+1)){ //3번연산
                    d.push_front(d.back());
                    d.pop_back();
                    cnt++;
                }
                else{//2번연산
                    d.push_back(d.front());
                    d.pop_front();
                    cnt++;
                }
            }
            d.pop_front();
        }

    }
    
    cout << cnt << "\n";

    
    



}