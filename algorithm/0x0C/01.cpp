#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[9];
bool isused[9];

void func(int k){
  if(k == m){
    for(int i=0; i<k; i++) cout << arr[i] << ' ';
    cout << "\n";
    return ;
  }
  else{
    for(int i=1; i<n+1; i++){
      if(!isused[i]){
        arr[k] = i;
        isused[i] = 1;
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
  func(0);
  
}

