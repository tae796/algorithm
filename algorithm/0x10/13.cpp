#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1010];
int len[1010];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        len[i] = 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++) if(arr[j] < arr[i]) len[i] = max(len[j]+1,len[i]);
    

  cout << *max_element(len, len + n) << "\n";
}

//12번 응용해서 해결