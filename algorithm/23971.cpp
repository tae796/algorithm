#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h,w,n,m;
    cin >> h >> w >> n >> m;
    int a = h/(n+1);
    int aa = h%(n+1);
    if(aa!=0) a++;
    int b = w/(m+1);
    int bb = w%(m+1);
    if(bb!=0) b++;

    cout << a*b << "\n";    
}