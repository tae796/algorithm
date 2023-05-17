#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin>> a;

    int arr[26];
    memset(arr,0,sizeof(arr));

    for(int i=0; i<4; i++){
        arr[a[i]-'A']++;
    }

    int mx = *max_element(arr,arr+26);
    int cnt = 0;


    for(int i=0; i<26; i++) {
        if(arr[i] == mx) cnt++;
    }

    if(mx == 2 && cnt == 2) cout << "Yes" << "\n";
    else cout << "No" << "\n";



}