#include<bits/stdc++.h>
using namespace std;

string input;
int ans;

string func1(string a){
    a.pop_back();
    return a;
}

string func2(string a){
    reverse(a.begin(),a.end());
    a.pop_back();
    return a;
}

void func(string a,int len){
    int flag1=0,flag2=0;
    if(a.size() <= len){
        if(a == input) ans = 1;
        return ;
    }
    if(a[a.size()-1] =='A') {
        flag1 =1;
        func(func1(a),len);
    }
    if(a[0] == 'B') {
        flag2 = 1;
        func(func2(a),len);
    }
    if(flag1 ==0 && flag2 == 0) return ;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> input >> a;
    func(a,input.size());

    cout << ans << "\n";
}