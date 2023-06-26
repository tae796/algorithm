#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int odd[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    int cnt = 0;
    int k_cnt=0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]%2 == 1){
            odd[k_cnt++] = cnt;
            cnt = 0;
        }
        else{
            cnt++;
        }
    }
    int st=0;
    int en=k+1;
    int sum = 0;
    int ans = 0;

    for(int i=0; i<=k; i++) sum += odd[i];
    int mx = sum;


    while(1){
        if(en == n) break;
        sum += odd[en++];
        sum -= odd[st++];
        mx = max(mx,sum);
        
    }

    cout << mx << "\n";
    
}
