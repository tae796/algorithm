#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int sum1 = b+d;
    int sum2 = a+c;
    if(sum1/60 == 1){
        sum2+=1;
        sum1-=60;
    }
    if(sum2/13 == 1){
        sum2-=12;
    }

    cout << sum2 << " " << sum1 <<"\n";
}