#include <bits/stdc++.h>
using namespace std;

vector<long long> v,v1;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        long long tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    for(int i=0; i<v.size(); i++){
        long long a = 0;
        while(v[i]>0){
            int tmp = v[i]%10;        
            a = a*10 + tmp;
            v[i] = v[i]/10;
        }
        v1.push_back(a);
    }

    sort(v1.begin(),v1.end());

    for(int i=0; i<v1.size(); i++) cout << v1[i] << "\n";
}

// longlong 이슈...