#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;

    cin >> a >> b >> c;

    if(a == b && a == c && b == c) cout << 10000 + 1000*a;
    else if ( a == b || a == c || b == c ) {
        if (a == b || a == c) cout << 1000 + 100*a;
        else if (b == c) cout << 1000 + 100*b;
    }
    else {
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort(arr,arr+3);
        cout << 100*arr[2];
    }

    return 0;

}