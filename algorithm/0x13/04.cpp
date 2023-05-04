#include <bits/stdc++.h>
using namespace std;

int m,n;
int arr[1000002];

bool solve(int x){
    long long cur = 0;
    if(x==0) return true;
    for(int i=0; i<n; i++) {
        if(arr[i]-x<=0) continue;
        else cur += arr[i]-x;
    }
    return cur>=m;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
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