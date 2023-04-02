#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum =0, tmp=1;
    int flag = 0;
    string a;
    cin >> a;
    stack<int> s;

    for(int i=0; i<a.size(); i++){


        if(a[i] == '('){
            s.push(a[i]);
            tmp = tmp * 2;        
        }
        else if(a[i] == '['){
            s.push(a[i]);
            tmp = tmp * 3;        
        }
        else if(a[i] == ')'){
            if(s.empty() || s.top() !='('){
                flag = 1;
                break;
            }
            else {
                s.pop();
                if(a[i-1] !=')') {
                    if(a[i-1] ==']');
                    else sum = sum + tmp;
                }
                tmp = tmp/2;
                
            }
        }
        else if(a[i] == ']'){
            if(s.empty() || s.top() !='['){
                flag = 1;
                break;
            }
            else {
                s.pop();
                if(a[i-1] !=']') {
                    if(a[i-1] ==')');
                    else sum = sum + tmp;
                }
                tmp = tmp/3;
            }
        }

    }

    if(!s.empty()) flag = 1;
    if(flag == 1) cout << 0 << '\n';
    else cout << sum << '\n';


}