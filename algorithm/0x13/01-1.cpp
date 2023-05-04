#include <bits/stdc++.h>
using namespace std;

int board[20000003];
int arr[500003];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int k;
    cin >> k;

    for(int i=0; i<k; i++){
        int tmp;
        cin >> tmp;    
        cout << binary_search(arr,arr+n,tmp) << " "; 
    }

}