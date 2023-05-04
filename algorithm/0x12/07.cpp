#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int arr[105];
        memset(arr,0,sizeof(arr));
        int k;
        cin >> k;
        for(int i=0; i<k; i++) cin >> arr[i];
        long long sum = 0;
        for(int i=0; i<k; i++){
            for(int j=i+1; j<k; j++){
                sum += __gcd(arr[i],arr[j]);
            }
        }
        cout << sum << "\n";
    }

}

//longlong이슈