#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int sum=0;

    if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) sum+=31-d1+1;
    else if (m1==4 || m1==6 || m1==9 || m1==11) sum+= 30-d1+1;
    else sum+= 28-d1+1;

    if(m1 != m2) sum += d2;

    while(m2-1>m1){
        m1++;
        if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) sum+=31;
        else if (m1==4 || m1==6 || m1==9 || m1==11) sum+= 30;
        else sum+= 28;
    }

    cout << sum << "\n";
      
}