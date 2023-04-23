#include <bits/stdc++.h>
using namespace std;


queue<int> q,q1;
vector<int> v;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    while(n--){
        int tmp;
        cin >> tmp;
        q.push(tmp);
    }
    while(m--){
        int tmp;
        cin >> tmp;
        q1.push(tmp);
    }

    while(!(q.empty() && q1.empty())){
        int a = 1000000000;
        int b = 1000000000;
        if(!q.empty())  a = q.front();
        if(!q1.empty()) b = q1.front();

        if(a>=b){
            q1.pop();
            v.push_back(b);
        }
        else{
            q.pop();
            v.push_back(a);
        }
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}