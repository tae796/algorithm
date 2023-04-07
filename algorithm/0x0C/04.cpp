#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m,n;
    cin >> n >> m;

    int arr[n];
    memset(arr,1,sizeof(arr));
    for(int i=0; i<m; i++) arr[i] = 0;

    do{
        for(int i=0; i<n; i++){
            if(arr[i] == 0) cout << i+1 << ' ';
        }
        cout << "\n";
    }while(next_permutation(arr,arr+n));
    



}


//next_permutation 없이도 풀어볼것