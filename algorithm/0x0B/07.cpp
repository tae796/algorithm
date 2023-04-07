#include <bits/stdc++.h>
using namespace std;

int arr[64][64];
int page=0,page1=0;

void func(int n, int a, int b){
    int cnt=0,cnt1=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[a+i][b+j] == 0) cnt++;
            else if(arr[a+i][b+j] == 1) cnt1++;
        }
    }
    if(cnt == n*n) cout << 0;
    else if(cnt1 == n*n) cout << 1;
    else{
        cout << '(';
        func(n/2,a,b);
        func(n/2,a,b+n/2);
        func(n/2,a+n/2,b);
        func(n/2,a+n/2,b+n/2);
        cout << ')';
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    memset(arr,0,sizeof(arr));

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++){
            arr[i][j] = a[j]-'0';
        }
    }

    func(n,0,0);
}

