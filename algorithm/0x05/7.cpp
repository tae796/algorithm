#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int a;
    cin >> a;
    long long sum = 0;
    int first = 0, cnt = 0;
    
    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        if(i == 0) {
            s.push(b);
            first = b;
            cnt = 1;
        }
        else{
            if(s.top() >b){
                sum = sum + 1;
                s.push(b);
            }
            else if(s.top() == b){
                if(first == b){
                    sum = sum + s.size();
                    cnt = cnt+1;
                }
                else{
                    sum = sum + s.size()- cnt+1;
                }
                s.push(b);
                
            }
            else{
                while(!s.empty() && b > s.top()) {
                    sum = sum + 1 ;
                    s.pop();
                }
                if(!s.empty()){
                    if(s.top() == b) {
                        if(first == b) {
                            sum = sum + s.size();
                            cnt = cnt+1;
                        }
                        else sum = sum + s.size() - cnt+1; 
                    }
                    else sum = sum + 1;
                }
                else {
                    first = b;
                    cnt = 1;
                }
                
                 
                s.push(b);
            }
        }
        
    }


    cout << sum << "\n";




}

//1. 풀이가 잘못됨
//2. 같은 값이 들어왔을때와 작은 값이 들어왔을 때의 처리가 달라야 함 + 큰 값이 들어왔을 때 size를 더하는게 아니라 pop하면서 +1 해야함
//3. 같은 값이 겹쳐 있는 경우가 반례
//4. 반례를 찾을수가 없어서 혹시 잘못 제출했나 싶어서 같은코드 제출해봄
//5. 4와같음
// 9 8 2 7 6 1 7 -> 반례
