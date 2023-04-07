#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<pair<int,int>> v;
vector<pair<int,int>> :: iterator iter;
void func(int a, int b, int n){
    
    cnt++;
    if(n == 1) v.push_back({a,b});
    else{
        func(a, 6-a-b, n-1);
        v.push_back({a,b});
        func(6-a-b,b,n-1);
        
        
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    func(1,3,n);
    cout << cnt << "\n";

    for(iter = v.begin() ; iter<v.end() ; iter++)
        cout << (*iter).first << " " << (*iter).second << "\n";
}
