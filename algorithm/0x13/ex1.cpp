#include <bits/stdc++.h>
using namespace std;

int arr[100002];

int func(int st, int en, int target){
    while(st<=en){
        int mid = (st+en)/2;
        if(target<arr[mid]){
            en = mid-1;
        }
        else if(target == arr[mid]) return 1;
        else{
            st = mid+1;
        }
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr,arr+n);
    cin >> k;
    while(k--){
        int st,en,tmp;
        cin >> tmp;
        st = 0;
        en = n-1;
        cout << func(st,en,tmp) << "\n";
    }

}