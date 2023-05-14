#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int mx = 0;
    int mn = 10001;
    int sum = 0;
    for(int i=0; i<10; i++){
        int tmp;
        cin >> tmp;
        mx = max(mx,tmp);
        mn = min(mn,tmp);
        sum += tmp;
    }
    sum = sum - mx - mn;
    if(sum%8 >=4){
        sum /=8;
        sum +=1;
    }
    else sum /= 8;
    

    cout << sum << "\n";

}


//반올림 안해서 틀림