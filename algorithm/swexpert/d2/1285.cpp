#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[100005];
    memset(arr,0,sizeof(arr));

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        arr[abs(tmp)]++;
    }

    for(int i=0; i<100001; i++){
        if(arr[i]>0){
            cout << i << " " << arr[i] << "\n";
            break;
        }
    }
    


}