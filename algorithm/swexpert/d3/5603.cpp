#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    int sum = 0;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        sum +=tmp;
    }
    sum /=n;
    int ans = 0;
    for(int i=0; i<v.size();i++){
        while(v[i]>sum){
            ans++;
            v[i] -=1;
        }
    }
    cout << ans << "\n";

}