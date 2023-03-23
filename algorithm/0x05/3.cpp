#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int a;
    cin >> a;
    int out[a];
    fill(out,out+a,0);
    int cnt = 0, i = 1, minus =0, plus = 0;
    vector<int> v;

    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        out[i] = b;
    }
    s.push(0);
    while(!s.empty()){
        if((s.top() == out[cnt])){
            s.pop();
            v.push_back(0);
            cnt++;
        }
        else{
            if(i<=a){
                s.push(i);
                i++;
                v.push_back(1);
            }
            else{
                if(s.top() == out[cnt]){
                    s.pop();
                    v.push_back(0);
                    cnt++;
                }
                else if(s.top() == 0) break;
                else{
                    cout << "NO" << "\n";
                    return 0;
                }
            }
        }
        

    }

    vector<int> ::iterator iter;

    for(iter = v.begin(); iter<v.end(); iter++){
        if(*iter == 0) cout << "-" << "\n";
        else cout << "+" << "\n";
    }



    

}