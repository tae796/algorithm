#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int sum = 0;
    int speed = 0;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a;
        if(a==0) {
            sum += speed;
            continue;
        }
        cin >> b;
        if(a==1){
            speed += b;
            sum += speed;
        }
        else{
            speed -=b;
            if(speed<0) speed =0;
            sum += speed;
        }
    }

    cout << sum << "\n";
}