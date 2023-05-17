#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    vector<int > v,v1,v2,v3;
    for(int i=0; i<a.size(); i++){
        v.push_back(a[i]-'0');
        v1.push_back(a[i]-'0');
        v2.push_back(a[i]-'0');
        v3.push_back(a[i]-'0');
    }

    sort(v1.begin(),v1.end());

    int j = 0;
    int mx = 0;
    for(int i=v1.size()-1; i>=0; i--){
        if(v1[i] == v[j]) {
            j++;
            continue;
        }
        mx = v1[i];
        break;
    }
    int pos=0;
    for(int i=v.size()-1; i>=0; i--){
        if(mx == v[i]) {
            pos = i;
            break;
        }
    }


    for(int i=0; i<v.size(); i++){
        if(v2[i]>=mx) continue;
        int tmp = v2[i];
        v2[i] = v2[pos];
        v2[pos] = tmp;
        break;
    }

    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum = sum*10 + v2[i];
    }


    for(int i=0; i<n; i++){
        
    }
    


    mn = 0;
    for(int i=0; i<v.size(); i++){
        mn = mn*10 + v3[i];
    }


    

    cout << mn << " " << sum << "\n";


}