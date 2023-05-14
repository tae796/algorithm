#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    fill(arr,arr+n,1);
    fill(arr,arr+k,0);

    int cnt = 0;
    do{
        if(cnt>1234567891) cnt -=12345678941;
        cnt++;
    }while(next_permutation(arr,arr+n));

    cout << cnt << "\n";
}