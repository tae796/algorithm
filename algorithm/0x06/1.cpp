#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int a;
    cin >> a;

    for(int i=0; i<a; i++){
        string b;
        cin >> b;

        if(b=="push"){
            int data;
            cin >> data;
            q.push(data);
        }
        else if(b=="pop"){
            if(q.empty()) cout << "-1" << "\n";
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(b=="size"){
            cout << q.size() << "\n";
        }
        else if(b=="empty"){
            cout << q.empty() << "\n";
        }
        else if(b=="front"){
            if(q.empty()) cout << "-1" << "\n";
            else cout << q.front() << "\n";
        }
        else if(b=="back"){
            if(q.empty()) cout << "-1" << "\n";
            else cout << q.back() << "\n";
        }

    }

}