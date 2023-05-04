#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n==1) return 0;
    for(int i=2; i*i<=n; i++){
        while(n % i == 0){
            v.push_back(i);
            n /=i;
        }
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
    if(n!=1) cout << n << "\n";
    
}