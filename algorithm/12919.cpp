#include<bits/stdc++.h>
using namespace std;

string input;
int ans;

string func1(string a){
    a +="A";
    return a;
}

string func2(string a){
    a +="B";
    reverse(a.begin(),a.end());
    return a;
}

void func(string a,int len){
    if(a.size() >= len){
        if(a == input) ans = 1;
        return ;
    }
    func(func1(a),len);
    func(func2(a),len);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a >> input;
    func(a,input.size());

    cout << ans << "\n";
}