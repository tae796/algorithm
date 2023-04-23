#include <bits/stdc++.h>
using namespace std;

vector<string> v;

bool func(string a,string b){
    // if(a.size() != b.size()) return a.size() < b.size();

    // int a_cnt=0,b_cnt=0;

    // for(int i=0; i<a.size(); i++) if(a[i] <='9' && a[i]>='0') a_cnt = a_cnt + a[i] -'0';
    // for(int i=0; i<b.size(); i++) if(b[i] <='9' && b[i]>='0') b_cnt = b_cnt + b[i] -'0';

    // if(a_cnt != b_cnt) return a_cnt < b_cnt;

    // return a < b;
    
    if(a.size() > b.size()) return false;
    else if(a.size() == b.size()){
        int a_cnt=0,b_cnt=0;
        for(int i=0; i<a.size(); i++) if(a[i] <='9' && a[i]>='0') a_cnt = a_cnt + a[i] -'0';
        for(int i=0; i<b.size(); i++) if(b[i] <='9' && b[i]>='0') b_cnt = b_cnt + b[i] -'0';

        if(a_cnt>b_cnt) return false;
        else if(a_cnt == b_cnt){
            for(int i=0; i<a.size(); i++){
                if(a[i] > b[i]) return false;
                else if(a[i] == b[i]) continue;
                else return true;
            }
            return false;
        }
        else return true; 
        
    }
    else return true;

    
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end(),func);

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";



}

//아 52 +53 이 59보다 큰거니까 '0'을 빼주는게 맞네 왜 안뺴도 똑같다고 생각했을까