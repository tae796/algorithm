#include<bits/stdc++.h>
using namespace std;


int arr[10005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    for(int i=5; i<=10000; i++){
        arr[i] = arr[i-3] + i/2 + 1;
    }

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        cout << arr[a] << "\n";
    }
}