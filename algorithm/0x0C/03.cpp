#include <bits/stdc++.h>
using namespace std;


int m,n,cnt=0;
bool isused[1100000];
int arr[21];
int sum = 0;

void func(int k,int sum){
    if(k == n){
        if(sum == m) cnt++;
        return;
    }
    func(k+1,sum);
    func(k+1,sum+arr[k]);  
}

int main(void){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];
    func(0,0);
    if(m == 0) cnt--;
    cout << cnt << "\n";
}
