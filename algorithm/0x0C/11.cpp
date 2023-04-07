#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[8];
int ans[8];
bool isused[8];
string hst[50000];
int cnt=0;

void func(int k){
    if(k == m){
        string tmp;
        int a=0;
        for(int i=0; i<m; i++) tmp = tmp + to_string(ans[i]);
        while(hst[a] !="\0"){
            if(hst[a] == tmp) return;
            a++;
        }
        for(int i=0; i<m; i++) cout << ans[i] << ' ';
        hst[cnt++] = tmp;
        cout << "\n";
        return ;
    }
    else{
        for(int i=0; i<n; i++){
            if(!isused[i]){
                isused[i] = 1;
                ans[k] = arr[i];
                func(k+1);
                isused[i] = 0;
            }
            
 
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    memset(hst,'\0',sizeof(hst));
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    func(0);

    }

// ㅇㅋ 이 방식 안되는거 확인 완료 -> 답지 방법대로 하는게 맞다