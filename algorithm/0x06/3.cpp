#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int a;
    cin >> a;
    for(int i=0; i<a;i++){
        q.push(i+1);
    }

    while(q.size()>1){
        q.pop();
        int tmp = q.front();
        q.push(tmp);
        q.pop();
    }

    cout << q.front() <<"\n";

}