#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,sum = 0,min = 0,count = 0;

    for(int i=0;i<7;i++){
        cin >> a;
        if(a%2 == 1){
            count++;
            sum = sum + a;
            if(count==1) min = a;
            else if(a<min) min = a;
        }
    }
    
    if(count == 0){
        cout << "-1" << "\n";
        return 0;    
    }

    cout << sum << "\n";
    cout << min << "\n";
    return 0;
}