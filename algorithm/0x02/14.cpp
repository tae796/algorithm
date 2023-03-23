#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long arr[2];
    cin >> arr[0] >> arr[1];

    sort(arr,arr+2);

    if(arr[0] == arr[1]){
        cout << 0 << "\n";
    }
    else{
        cout << arr[1]-arr[0]-1 << "\n";
        
        for(long long i=arr[0]+1; i<arr[1]; i++)
            cout << i << " ";
    }
    return 0;
}