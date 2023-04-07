#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[8];
int ans[8];


void func(int k){
    if(k == m){
        for(int i=0; i<m; i++) cout << ans[i] << ' ';
        cout << "\n";
        return ;
    }
    else{
        for(int i=0; i<n; i++){
            if(k == 0){
                ans[k] = arr[i];
                func(k+1);
            }
            else if(arr[i]>ans[k-1]){
                ans[k] = arr[i];
                func(k+1);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    func(0);
    
}

//isused 써서 풀어도 되긴 할듯?