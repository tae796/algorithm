#include <bits/stdc++.h>
using namespace std;

int arr[3073][6146];


void func(int n,int a,int b){
    if(n==3){
        arr[a][b+2] = 1;
        arr[a+1][b+1] = 1;
        arr[a+1][b+3] = 1;
        for(int i=0; i<5;i++) arr[a+2][b+i] =1;
    }
    else{
        func(n/2,a,b+n/2);
        func(n/2,a+n/2,b);
        func(n/2,a+n/2,b+n);
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    memset(arr,0,sizeof(arr));

    func(n,0,0);


    for(int i=0; i<n; i++){
        for(int j=0; j<2*n+1; j++){
            if(arr[i][j] == 1) cout << '*';
            else cout <<' ';
        }
        cout << "\n";
    }
}


// j의 범위가 2n+1 인데 배열의 크기를 n까지만 했음