#include <bits/stdc++.h>
using namespace std;

int arr[2187][2187];
int page=0,page1=0,page2=0;

void func(int n, int a, int b){
    int cnt=0,cnt1=0,cnt2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[a+i][b+j] == -1) cnt++;
            else if(arr[a+i][b+j] == 0) cnt1++;
            else if(arr[a+i][b+j] == 1) cnt2++; 
        }
    }
    if(cnt == n*n) page++;
    else if(cnt1 == n*n) page1++;
    else if(cnt2 == n*n) page2++;
    else{
        func(n/3,a,b);
        func(n/3,a,b+n/3);
        func(n/3,a,b+2*n/3);
        func(n/3,a+n/3,b);
        func(n/3,a+n/3,b+n/3);
        func(n/3,a+n/3,b+2*n/3);
        func(n/3,a+2*n/3,b);
        func(n/3,a+2*n/3,b+n/3);
        func(n/3,a+2*n/3,b+2*n/3);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    memset(arr,0,sizeof(arr));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    func(n,0,0);

    cout << page << "\n";
    cout << page1 << "\n";
    cout << page2 << "\n";
}


//3번을 이런식으로 풀어서 오히려 쉽게 풀었음