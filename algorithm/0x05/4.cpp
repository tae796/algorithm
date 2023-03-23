#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    vector<int> v;
    vector<int>::iterator iter;
    vector<int>::reverse_iterator riter;
    map<int,int> m;
    int a;
    cin >> a;
    int max = 0, cnt = 0;
    for(int i=0; i<a; i++){
        
        
        int b;
        cin >> b;

        m.insert({b,i+1});

        if(i == 0){
            v.push_back(0);
            s.push(b);
            
        } 
        else{
            while(!s.empty()){
                if(s.top() > b){
                    v.push_back(m[s.top()]);
                    s.push(b);
                    break;
                }
                else{
                    s.pop();
                }
            }
            if(s.empty()) {
                s.push(b);
                v.push_back(0);
                
            }
        }
        
    }

    for(iter = v.begin(); iter<v.end(); iter++)
        cout << *(iter) << ' ';
    

}


//1. 이중포문은 시간초과인걸 알고있지만 답이 없어서 혹시하는 마음에 한번 시도해봄..
//2. 겹칠때 인덱스를 잘못 설정함
//3. 마지막 input 값이 들어올 때 체크 안함
//4. 역순으로할때 값이 이상해짐
//5  2,3,4 모두 map 같은걸 찾고있었는데 없어서 못하고있었음. map을 찾으니 한번에 성공!