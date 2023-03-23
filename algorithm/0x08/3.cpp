#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;

    for(int i=0; i<a; i++){
        int flag = 0;
        string b;
        cin >> b;
        stack<char> s;
        for(int j=0; j<b.size(); j++){
            if(b[j] == '(') s.push(b[j]);
            else if(b[j] == ')'){
                if(s.empty() || s.top() != '('){
                    flag = 1;
                    break;
                }
                else s.pop();
            }
        }

        if(!s.empty()) flag = 1;

        if(flag == 1) cout << "NO\n";
        else cout << "YES\n"; 

    }

    

}