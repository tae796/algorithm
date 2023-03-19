#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5];
    int average = 0,center;

    for(int i=0;i<5;i++){
        cin >> arr[i];
        average = average + arr[i];
    }
    sort(arr,arr+5);

    cout << average/5 << "\n";
    cout << arr[2] << "\n";
}