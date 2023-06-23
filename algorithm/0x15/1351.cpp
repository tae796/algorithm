#include <bits/stdc++.h>
using namespace std;

unordered_map<long long,long long> mapa;
unordered_set<long long> seta;
long long n,p,q;

long long func(long long a){
    if(a==0) return 1;
    if(mapa[a]) return mapa[a];
    mapa[a] = func(a/p) + func(a/q);
    return mapa[a];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> p >> q;
    func(n);
    cout << func(n) << "\n";
}


//DP를 좀 더 잘하기 (해시는 결국 벡터처럼 도구니까, DP같은 알고리즘을 더 공부할 것)