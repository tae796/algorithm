#include <bits/stdc++.h>
using namespace std;


vector<bool> state(4000001, true);
void sieve(int n){
    state[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(!state[i]) continue;
        for(int j = i*i; j <= n; j += i)
            state[j] = false;
    }
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    sieve(n);

    int st = 2;
    int en = 2;
    int sum = 0;
    int ans = 0;
    
    while(1){    
        if(state[en] == 0){
            en++;
            continue;
        }
        if(state[st] == 0){
            st++;
            continue;
        }

        if(sum < n){
            if(en>n) break;
            sum += en;
            en++;
        }
        else if (sum == n){
            ans++;
            sum -= st;
            st++;
        }
        else {
            sum -= st;
            st++;
        }
    }

    cout << ans << "\n";


}