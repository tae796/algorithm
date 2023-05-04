#include <bits/stdc++.h>
using namespace std;

int board[1000002];
int arr[1000002];
int arr1[1000002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        board[i] = arr[i];
    }
    

    sort(arr,arr+n);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(i==0){
            arr1[cnt++] = arr[i];
        }
        else{
            if(arr[i-1]==arr[i]) continue;
            else arr1[cnt++] = arr[i];
        }
    }

    for(int i=0; i<n; i++) cout << lower_bound(arr1,arr1+cnt,board[i]) -arr1 << " ";




    

}
