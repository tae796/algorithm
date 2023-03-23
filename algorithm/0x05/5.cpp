#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s, rs;
    vector<int> v;
    vector<int>::iterator iter;
    vector<int>::reverse_iterator riter;
    multimap<int,int> m;
    int a;
    cin >> a;
    int sum = 0,cnt = 0;

    for(int i=0; i<a; i++){        
        int b;
        cin >> b;
        s.push(b);
        
    }

    for(int i=0; i<a; i++){
        int asd = 0;
        int tmp = s.top();
        m.insert({s.top(),i+1});
        if(i==0){
            rs.push(tmp);
            s.pop();
        }
        else{
            while(!rs.empty()){
                if(tmp > rs.top()){
                    rs.pop();
                }
                else{
                    if(!s.empty())
                    {
                        sum = sum + m[tmp] - m[rs.top()] - 1;
                        rs.push(tmp);
                        s.pop();
                        break;
                    }
                    else break;
                }
            }
            if(rs.empty()) {
                rs.push(tmp);
                sum = sum + m[tmp]-1;
                s.pop();
            }
        }
    }
        cout << sum << ' ';
    

}


//1. 같은 값일 때를 생각 못함