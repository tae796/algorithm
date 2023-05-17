#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<a.size(); i++){
        arr[a[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(arr[i]%2 ==0) arr[i] = 0;
        else arr[i] = 1;
    }


    string ans="";
    for(int i=0; i<26; i++){
        if(arr[i]) {
            char tmp;
            tmp = i +'a';
            ans += tmp;
        }
    }

    if(ans.size()==0) cout << "Good" << "\n";
    else cout << ans << "\n";
    
}