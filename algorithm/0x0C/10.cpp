#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[8];
int ans[8];
bool isused[8];

void func(int k){
    if(k == m){
        for(int i=0; i<m; i++) cout << ans[i] << ' ';
        cout << "\n";
        return ;
    }
    else{
        for(int i=0; i<n; i++){
            if(!isused[i]){
                if(arr[i]>=ans[k-1]){
                    ans[k] = arr[i];
                    func(k+1);
                }
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

// 제출하고 보니까 isused는 쓰지도않았네 ㅋㅋㅋ