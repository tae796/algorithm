#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a,b;
    cin >> a >> b;
    if(a.size()<b.size()){
        string tmp= a;
        a = b;
        b = tmp;
    }

    int flag = 1;
    for(int i=1; i<=50; i++){
        string tmp = "";
        for(int q=0; q<i; q++) tmp += a;
        
        for(int j=i; j<=50; j++){
            string tmp2 ="";
            for(int w=0; w<j; w++) tmp2 +=b;
            if(tmp.compare(tmp2)==0) flag = 0;
        }
    }

    if(flag==1) cout << "no" <<"\n";
    else cout << "yes" << "\n";
}