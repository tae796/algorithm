#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[8];


void func(int k){
    if(k == m){
        for(int i=0; i<m; i++) cout << arr[i] << ' ';
        cout << "\n";
        return ;
    }
    else{
        for(int i=1; i<=n; i++){
            if(k == 0){
                arr[k] = i;
                func(k+1);
            }
            else if(i>=arr[k-1]){
                arr[k] = i;
                func(k+1);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
    
}