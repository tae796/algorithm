#include <bits/stdc++.h>
using namespace std;

int ans[4];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string a;
    cin >> a;
    
    int cnt1=0,cnt2=0;
    int flag = 0;
    for(int i=0; i<n; i++){ 
        if(a[i] == 'B'){
            flag = 1;
        }
        if(a[i] == 'R' && flag) ans[0]++;
    }
    
    flag = 0;
    for(int i=0; i<n; i++){ 
        if(a[i] == 'R'){
            flag = 1;
        }
        if(a[i] == 'B' && flag) ans[1]++;
    }

    flag = 0;
    for(int i=n-1; i>=0; i--){ 
        if(a[i] == 'R'){
            flag = 1;
        }
        if(a[i] == 'B' && flag) ans[2]++;
    }

    flag = 0;
    for(int i=n-1; i>=0; i--){ 
         if(a[i] == 'B'){
            flag = 1;
        }
        if(a[i] == 'R' && flag) ans[3]++;
    }

    sort(ans,ans+4);
    cout << ans[0] << "\n";
}