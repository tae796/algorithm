#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9];
    int max,pos;
    for(int i=0; i<9; i++) cin >>arr[i];

    max = *(max_element(arr,arr+9));

    for(int i=0; i<9; i++) {
        if(arr[i] == max) pos = i+1;
    }

    cout << max << "\n" << pos;
}