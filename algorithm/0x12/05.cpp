#include <bits/stdc++.h>
using namespace std;

bool arr1[300000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr1[1] = true;    
    for(int i=2; i*i<=300000;i++){
        for(int j=i; j<=300000; j+=i){
            if(j==i) continue;
            if(arr1[j] == true) continue;
            arr1[j] = true;
        }
    }


    while(1){
        int a;
        int ans=0;
        cin >> a;
        if(a==0) return 0;

        for(int i=a+1; i<=2*a; i++){
            if(arr1[i]==false) ans++;
        }
        cout << ans <<"\n";
    }

}