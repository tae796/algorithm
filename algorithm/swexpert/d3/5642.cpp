#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int sum[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum[i] = arr[i];
    }
        

    for(int i=1; i<n; i++){
        if((sum[i-1]+arr[i]) > sum[i]){
            sum[i] = sum[i-1]+arr[i];
        }
        else{

        }
    }

    cout << *max_element(sum,sum+n) << "\n";

}