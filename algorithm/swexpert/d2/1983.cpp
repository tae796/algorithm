#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k ;
    vector<pair<int,int>> v;
    int cnt = n/10;

    for(int i=0; i<n; i++){
        int sum = 0;
        int tmp;
        cin >> tmp;
        sum += tmp*35;
        cin >> tmp;
        sum += tmp*45;
        cin >> tmp;
        sum += tmp*20;
        v.push_back({sum,i+1});
    }
    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        if(v[i].second == k){
            if(i<cnt) cout << "D0";
            else if(i<(cnt*2)) cout << "C-";
            else if(i<(cnt*3)) cout << "C0";
            else if(i<(cnt*4)) cout << "C+";
            else if(i<(cnt*5)) cout << "B-";
            else if(i<(cnt*6)) cout << "B0";
            else if(i<(cnt*7)) cout << "B+";
            else if(i<(cnt*8)) cout << "A-";
            else if(i<(cnt*9)) cout << "A0";
            else cout << "A+";
        }
    }
    cout << "\n";


}

//100으로 나누면 나머지 떄문에 값이 이상해지기 때문에 나눌 필요가 없음