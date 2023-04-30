#include <bits/stdc++.h>
using namespace std;

long long arr[101];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    arr[6] = 3;
    arr[7] = 4;
    arr[8] = 5;
    arr[9] = 7;

    for(int i=10; i<=100; i++){
        arr[i] = arr[i-1] + arr[i-5];
    }


    while(n--){
        int a;
        cin >> a;
        cout << arr[a] << "\n";

    }



}