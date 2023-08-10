#include<bits/stdc++.h>
using namespace std;

int arr[11];
vector<int> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<v.size(); i++){
        int cnt = 0;
        int tmp = v[i];
        for(int j=0; j<tmp; j++){
            if(arr[j] !=0 && arr[j] < i+1) tmp++;
        }
        if(arr[tmp] == 0) arr[tmp] = i+1;
        else{
            while(arr[tmp] !=0) tmp++;
            arr[tmp] = i+1;
        }   
    }

    for(int i=0; i<n; i++) cout << arr[i] << " ";
}