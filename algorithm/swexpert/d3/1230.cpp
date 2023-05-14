#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    list<int> v;
    list<int>::iterator iter;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int n2;
    cin >> n2;


    for(int q=0; q<n2; q++){
        string tmp;
        cin >> tmp;
        if(tmp == "I"){
            int a,b;
            cin >> a >> b;
            iter = v.begin();
            for(int i=0; i<a; i++){
                iter++;
            }
            for(int i=0; i<b; i++){
                int tmp;
                cin >> tmp;
                v.insert(iter,tmp);
            }

        }
        else if (tmp=="D"){
            int a,b;
            cin >> a >> b;
            iter = v.begin();
            for(int i=0; i<a; i++){
                iter++;
            }
            int cnt =0;
            for(int i=0; i<b; i++){
                v.erase(iter++);
            }
                
        }
        else{
            int a;
            cin >> a;     
            for(int i=0; i<a; i++){
                int tmp;
                cin >> tmp;
                v.push_back(tmp);
            }
        }
    }

    iter = v.begin();
    for(int i=0; i<10; i++){
        cout << *iter++ << " ";
    }
    cout << "\n";
}

