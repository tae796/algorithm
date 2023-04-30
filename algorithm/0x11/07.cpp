#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    int tmp=0;
    int sum=0;
    int ans=0;
    for(int i=0; i<a.size(); i++){
        if(isdigit(a[i])){
            tmp = tmp*10 + a[i]-'0';       
        }
        else if(a[i] == '-'){
            sum += tmp;
            v.push_back(sum);
            tmp = 0;
            sum = 0;
        }
        else if(a[i] == '+'){
            sum = sum + tmp;
            tmp = 0;
        }
    }

    v.push_back(sum+tmp);
    
    ans = v[0];

    for(int i=1; i<v.size(); i++)
        ans = ans-v[i];


    cout << ans << "\n";
    
}