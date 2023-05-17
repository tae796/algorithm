#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;

    string ans ="";
    for(int i=a.size()-1; i>=0; i--){
        if(a[i] == 'b') ans +='d';
        else if(a[i] == 'd') ans +='b';
        else if(a[i] == 'p') ans +='q';
        else if(a[i] == 'q') ans +='p';
    }    

    cout << ans << "\n";
}