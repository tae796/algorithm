#include <bits/stdc++.h>
using namespace std;

vector<int> v,v1;


vector<int> func(int n){
    vector<int> primes;
    vector<bool> state(n+1, true);
    state[1] = false;
    for(int i=2; i*i<=n; i++){
        if(!state[i]) continue;
        for(int j=i*i; j<=n; j+=i){
            state[j] = false;
        }
    }
    for(int i=2; i<=n; i++){
        if(state[i]) primes.push_back(i);
    }
    return primes;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    int ans=0;
    cin >> a >> b;

    v1 = func(b);

    for(int i=0; i<v1.size(); i++){
        if(v1[i]>=a) cout << v1[i] << "\n";
    }

}