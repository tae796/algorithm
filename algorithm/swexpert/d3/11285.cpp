#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    int n;
    cin >> n;
    int arr[10] = {20,40,60,80,100,120,140,160,180,200};

    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        int tmp = x*x + y*y;
        for(int i=0; i<10; i++){
            if(tmp <= arr[i]*arr[i]) {
                sum += 10-i;
                break;
            }
        }
    }

    cout << sum << "\n";
}