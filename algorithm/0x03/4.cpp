#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    int arr[a];
    int count[1000001];
    int result = 0;
    int input;
    fill(count,count+1000001,0);
    
    for(int i=0; i<a; i++) cin >> arr[i];

    cin >> input;

    for(int i=0; i<a; i++){
        count[arr[i]]++;
    }

    for(int i=0; i<a; i++){
        int tmp = input-arr[i];
        if(tmp<0 || tmp>1000000) continue;
        if(count[tmp] == 1) result++;
    }

    cout << result/2 << "\n";

    
}