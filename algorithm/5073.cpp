#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if(a[0]==0 && a[1]==0 && a[2]==0) break;

        sort(a,a+3,greater<>());
        if(a[0] >= a[1] + a[2]) cout << "Invalid" << "\n";
        else if(a[0] == a[2]) cout << "Equilateral " << "\n";
        else if(a[0]!=a[1] && a[1]!=a[2]) cout << "Scalene" <<"\n";
        else cout << "Isosceles" << "\n";
        

    }
}