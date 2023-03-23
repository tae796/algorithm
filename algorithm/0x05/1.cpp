#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> S;

    int a;
    cin >> a;

    for(int i=0; i<a; i++){
        string input;
        cin >> input;
        if(input == "push") {
            int data;
            cin >> data;
            S.push(data);
        }
        else if(input == "pop"){
            if(S.size() == 0) cout << "-1" << "\n";
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if(input == "size"){
            cout << S.size() << "\n";
        }
        else if(input == "empty"){
            if(S.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else if(input == "top"){
            if(S.size() == 0) cout <<  "-1" << "\n";
            else cout << S.top() << "\n";
        }
    }

}