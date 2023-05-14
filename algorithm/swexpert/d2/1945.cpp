#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[5];
    memset(arr,0,sizeof(arr));
    while(n%2 ==0){
        arr[0]++;
        n/=2;
    }
    while(n%3 ==0){
        arr[1]++;
        n/=3;
    }
    while(n%5 ==0){
        arr[2]++;
        n/=5;
    }
    while(n%7 ==0){
        arr[3]++;
        n/=7;
    }
    while(n%11 ==0){
        arr[4]++;
        n/=11;
    }

    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << "\n";
}