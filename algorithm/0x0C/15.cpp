#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int n;
        cin >> n;
        if(n == 0) return 0;
        int arr[n], ans[n];
        memset(ans,1,sizeof(ans));
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<6; i++) ans[i] = 0;
        sort(arr,arr+n);
        do{
            for(int i=0; i<n; i++){
                if(ans[i]==0) cout << arr[i] << " ";
            }
            cout << "\n";
        }while(next_permutation(ans,ans+n));
        cout << "\n";
    
    }
    

}