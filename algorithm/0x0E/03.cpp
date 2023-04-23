#include <bits/stdc++.h>
using namespace std;

int arr[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(arr,0,sizeof(arr));
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }

    for(int i=1; i<=10000; i++) {
        for(int j=0; j<arr[i]; j++){
            cout << i << "\n";
        }
    }
}


//i를 10001까지 해서 틀렸는데 그러면 차라리 outofbound가 뜨지 않나..? 쓰레기값이 들어가서 for문이 돌아간건가..