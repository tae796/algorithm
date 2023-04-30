#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1010];
int sum[1010];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++) if(arr[j] < arr[i]) sum[i] = max(sum[i], sum[j] + arr[i]);
    

  cout << *max_element(sum, sum + n) << "\n";
}


// 답지 보고 해결함