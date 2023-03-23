#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;

    int a;
    cin >> a;
    int sum = 0;
    

    for(int i=0; i<a; i++){
        int b,cnt=0;
        cin >> b;
        if(i==0) s.push(b);
        else{
            if(s.top() >= b){
                s.push(b);
                sum++;
            }
            else if(s.top() == b) {
                sum++;
                while(s.top() == b){
                    s.pop();
                    cnt++;
                    sum++;
                    if(s.empty()) break;
                }
                for(int j=0; j<cnt; j++)
                s.push(b);
            }
            else{
                while(s.top() < b){
                    s.pop();
                    sum++;
                    if(s.empty()) break;
                }
                s.push(b);
            }
            
        } 


    }
    cout << sum << "\n";




}

//1. 같은 숫자일 때 값이 다르고, if(i==0) 다음을 else로 안묶음