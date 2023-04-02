#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   

    while(1){
        int flag = 0;
        string a;
        getline(cin,a);
        if(a == ".") break;
        stack<char> s;
        int i = 0;
        while(a[i] !='.'){
            if(a[i]=='(' || a[i]=='[') s.push(a[i]);
            else if(a[i]==')'){
                if(s.empty() || s.top() !='('){
                    flag =1;
                    break;
                } 
                else s.pop();
            }
            else if(a[i]==']'){
                if(s.empty() || s.top() !='['){
                    flag =1;
                    break;
                } 
                else s.pop();
            }
            i++;
        }
        
        if(!s.empty()) flag = 1;
        if(flag == 1) cout << "no\n";
        else cout << "yes\n";    
    }
    


}

//아... flag = 1 해야하는데 flag == 1 해서 1시간 날려먹음.. 왠지 정답코드랑 다른게 없는데 안되더라