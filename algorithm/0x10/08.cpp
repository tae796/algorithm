#include <bits/stdc++.h>
using namespace std;

int arr0[41];
int arr1[41];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    arr0[0] = 1;
    arr0[1] = 0;
    arr1[0] = 0;
    arr1[1] = 1;

    for(int i=2; i<=40; i++){
        arr0[i] = arr0[i-1] + arr0[i-2];
        arr1[i] = arr1[i-1] + arr1[i-2];
    }

    while(n--){
        int tmp;
        cin >> tmp;
        cout << arr0[tmp] <<" " << arr1[tmp] << "\n";
    }



}