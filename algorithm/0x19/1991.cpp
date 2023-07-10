#include <bits/stdc++.h>
using namespace std;

vector<int> v[30];
int lc[30];
int rc[30];

void pre(char cur){
    cout << char(cur+65-1);
    if(lc[cur] !=0) pre(lc[cur]);
    if(rc[cur] !=0) pre(rc[cur]);
}

void mid(char cur){
    if(lc[cur] !=0) mid(lc[cur]);
    cout << char(cur+65-1);
    if(rc[cur] !=0) mid(rc[cur]);
}

void last(char cur){
    if(lc[cur] !=0) last(lc[cur]);
    if(rc[cur] !=0) last(rc[cur]);
    cout << char(cur+65-1);
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char a,b,c;
        cin >> a >> b >> c;
        if(b !='.') lc[a-'A'+1] = b-'A'+1;
        if(c !='.') rc[a-'A'+1] = c-'A'+1;
    }
    pre(1);
    cout << "\n";
    mid(1);
    cout << "\n";
    last(1);
    cout << "\n";
}