#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int sum[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int tot=0;
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
        tot +=arr[i];
        sum[i] = tot;
    }

    while(m--){
        int a,b;
        cin >> a >> b;
        if(a==b) cout << arr[b] << "\n";
        else{
            cout << sum[b] - sum[a-1] << "\n";
        }
    }

    
}