#include <bits/stdc++.h>
using namespace std;

int arr[10000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long sum=0;
    int cnt=0;
    int mx=0;
    for(int i=n-1; i>=0; i--){
        if(mx>arr[i]){
            sum = sum + mx - arr[i];
        }
        else{
            mx = arr[i];
        }

    }

    cout << sum << "\n";

}


// long long으로 안해서 틀림
// arr를 지역변수로 할당할 경우 실행하자마자 세그먼트 폴트가 뜨는데 전역변수로 설정할 경우 그렇지 않다
// 메모리 구조에 따라 지역변수는 stack에 할당되고 전역변수는 data에 할당되는데 이것의 크기가 문제일까?