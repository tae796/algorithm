#include <bits/stdc++.h>
using namespace std;

int m,n;
int arr[1000002];


bool solve(int x){
    if(x==0) return true;
    long long cur = 0;
    for(int i=0; i<n; i++) cur += arr[i]/x;
    return cur>=m;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;

    for(int i=0; i<n; i++) cin >> arr[i];

    int st = 0;
    int en = 1000000000;

    while(st<en){
        int mid = (st+en+1)/2;
        if(solve(mid)) st = mid;
        else en = mid-1;
    }


    cout << st << "\n";


}


// 시작을 0부터 해야하는데 1부터 시작함
// -> 0을 출력하라가 있어서 안될때는 en가 0으로 가므로 0부터 시작해야함