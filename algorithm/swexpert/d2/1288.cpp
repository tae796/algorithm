#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string n;
    cin >> n;

    bool arr[10] = {true,true,true,true,true,true,true,true,true,true};
    int ans=0;    
    while(arr[0] || arr[1] || arr[2] || arr[3] || arr[4] || arr[5] || arr[6] || arr[7] || arr[8] ||arr[9]){
        ans++;
        int tmp = stoi(n);
        string a = to_string(ans*tmp);
        for(int i=0; i<a.length(); i++){
            arr[a[i]-'0'] = false;
        }
        
    }
    int tmp = stoi(n);
    cout << ans*tmp << "\n";
    
}