#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    int a;
    cin >> a;
    long long sum = 0;

    for(int i=0; i<a; i++){        
        long long b;
        cin >> b;
        if(i==0) s.push(b);
        else{
            while(!s.empty() &&  b >= s.top()){
                s.pop();
            }
            sum = sum+ s.size();
            s.push(b);
            
        }
        
    }

    cout << sum;
    
    

}


//1. 같은 값일 때를 생각 못함
//2. 테스트로 넣어놓은걸 빼는걸 깜빡하고 제출함
//3. 같은 값일 때를 생각 못함
//4,5. int는 overflow가 나기때문에 long long으로 해야함
