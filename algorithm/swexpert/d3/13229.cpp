#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    cin >> a;
    if(a=="SUN") cout << 7 << "\n";
    else if(a=="SAT") cout << 1 << "\n";
    else if(a=="FRI") cout << 2 << "\n";
    else if(a=="THU") cout << 3 << "\n";
    else if(a=="WED") cout << 4 << "\n";
    else if(a=="TUE") cout << 5 << "\n";
    else if(a=="MON") cout << 6 << "\n";
}