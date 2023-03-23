#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> d;
    int a;
    cin >>a;
    for(int i=0; i<a; i++){
        string b;
        cin >>b;
        if(b=="push_front"){
            int data;
            cin >> data;
            d.push_front(data);
        }
        else if(b=="push_back"){
            int data;
            cin >> data;
            d.push_back(data);
        }
        else if(b=="pop_front"){
            if(d.empty()) cout << "-1" << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            } 
        }
        else if(b=="pop_back"){ 
            if(d.empty()) cout << "-1" << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if(b=="size"){
            cout << d.size() << "\n";
        }
        else if(b=="empty"){
            cout << d.empty() << "\n";
        }
        else if(b=="front"){
            if(d.empty()) cout << "-1" << "\n";
            else cout << d.front() << "\n";
        }
        else if(b=="back"){
            if(d.empty()) cout << "-1" << "\n";
            else cout << d.back() << "\n";
        }
    }


}