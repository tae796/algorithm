#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> v;
    int a = n;
    int arr[10];
    
    memset(arr,0,sizeof(arr));
    while(a>0){
        arr[a%10]++;
        a/=10;
    }
    int flag = 1;
    for(int i=2; i<10; i++){        

        int arr1[10];
        memset(arr1,0,sizeof(arr1));
        int tmp = n*i;
        while(tmp>0){
            arr1[tmp%10]++;
            tmp/=10;
        }   

        flag = 1;
        for(int j=0; j<10; j++){
            if(arr[j] != arr1[j]) flag = 0;
        }

        if(flag ==1) break;
    }
    
    

    if(flag == 1) cout << "possible" << "\n";
    else cout << "impossible" << "\n";

}