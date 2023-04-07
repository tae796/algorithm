#include <bits/stdc++.h>
using namespace std;

int arr[2187][2187];

void func(int n, int a, int b){
    if(n == 3){
        arr[a][b] = 1;
        arr[a][b+1] = 1;
        arr[a][b+2] = 1;
        arr[a+1][b] = 1;
        arr[a+1][b+2] = 1;
        arr[a+2][b] = 1;
        arr[a+2][b+1] = 1;
        arr[a+2][b+2] = 1;
    }
    else{
        func(n/3,a,b);
        func(n/3,a,b+n/3);
        func(n/3,a,b+2*n/3);
        func(n/3,a+n/3,b);
        func(n/3,a+n/3,b+2*n/3);
        func(n/3,a+2*n/3,b);
        func(n/3,a+2*n/3,b+n/3);
        func(n/3,a+2*n/3,b+2*n/3);
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(arr,0,sizeof(arr));
    int n;
    cin >> n;
    func(n,0,0);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 1) cout << '*';
            else cout << ' ';
        }
        cout << "\n";
    }


}