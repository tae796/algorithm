#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s,rs;
    vector<int> v;
    vector<int>::reverse_iterator riter;
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        s.push(b);
    }
    rs.push(1000001);

    for(int i=0; i<a; i++){
        if(s.top() < rs.top()){
            if(rs.top() == 1000001) v.push_back(-1);
            else v.push_back(rs.top());
            rs.push(s.top());
            s.pop();
        }
        else{
            while(s.top() >= rs.top()){
                rs.pop();
            }
            if(rs.top() == 1000001) v.push_back(-1);
            else v.push_back(rs.top());
            rs.push(s.top());
            s.pop();
        }
            
        
    }
    
    for(riter = v.rbegin(); riter<v.rend(); riter++)
        cout << *(riter) << " ";
    


}