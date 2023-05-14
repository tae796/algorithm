#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[101];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<1000; i++){
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }

    int mx = *max_element(arr,arr+101);

    for(int i=100; i>=0; i--){
        if(arr[i] == mx){
            cout << i << "\n";
            break;
        }
    }

}


//제출할때 쓸데없이 번호를 입력 받는 코드가 있어야함