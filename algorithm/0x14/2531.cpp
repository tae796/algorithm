#include <bits/stdc++.h>
using namespace std;

int arr[30005];
int chobab[3005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,d,k,c;
    cin >> n >> d >> k >> c;

    for(int i=0; i<n; i++) cin >> arr[i];
    

    int kind = 0;
    int ans = 0;

    for(int i=0; i<k; i++){
        if(chobab[arr[i]] == 0){
            chobab[arr[i]] = 1;
            kind++;
        }
        else{
            chobab[arr[i]]++;
        }
    }
    ans = kind;
    
    for(int i=k; i<n+k; i++){
        int tmp = i;
        if(i>=n){
            tmp = i-n;
        }
        if(chobab[arr[tmp]] == 0){
            chobab[arr[tmp]] = 1;
            kind++;
        }
        else{
            chobab[arr[tmp]]++;
        }
        if(tmp - k <0){
            tmp = tmp + n;
        }
        chobab[arr[tmp-k]]--;
        if(chobab[arr[tmp-k]]==0) kind--;

        if(chobab[c]>=1){
            ans = max(ans,kind);
        }   
        else{
            ans = max(ans,kind+1);
        }
    }

    cout << ans << "\n";
}