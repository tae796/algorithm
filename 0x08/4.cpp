#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    stack<int> s;
    int sum=0, size=0;

    for(int i=0; i<a.size(); i++){
        if(a[i] == '('){
            s.push(a[i]);
            size++;
        }
        else if(a[i] == ')'){
            if(a[i-1] == '('){
                s.pop();
                size--;
                sum = sum+size;
                               
            }
            else if(s.top() == '('){
                s.pop();
                size--;
                sum = sum + 1;
                               
            }
        }
    }

    cout << sum << "\n";

}