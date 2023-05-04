#include <bits/stdc++.h>
using namespace std;

int arr[1005];
bool arr1[1005];
int n,k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i=2; i<=n; i++) arr[i] = i;
    int cnt=0;
    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            if(arr1[j]==true) continue;
            arr1[j] = true;
            cnt++;
            if(cnt==k) {
                cout << j << "\n";
                return 0;
            }
        }
    }


}