#include <bits/stdc++.h>
using namespace std;

int arr[11];

int func(int k){
    if(k==1) return 1;
    if(k==2) return 2;
    if(k==3) return 4;

    return func(k-1)+func(k-2)+func(k-3);
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        ans = func(k);
        cout << ans << "\n";
        arr[k] = ans;
    }

}

// 이렇게 풀면 재귀니까 뭔가 arr에 담아서 하고싶었는데 어떻게 해야할지 모르겠어서 이렇게 했는데 답지보니 저렇게하면 되구나 싶었음