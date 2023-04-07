#include <bits/stdc++.h>
using namespace std;


int n,cnt=0;
bool isused[40];
bool isused1[40];
bool isused2[40];


void func(int k){
  if(k == n){
    cnt++;
    return;
  }

  for(int i = 1; i <= n; i++){ 
    if(!isused[i] && !isused1[k+i] && !isused2[k-i+n-1])
    {
      isused[i] = 1;
      isused1[k+i] = 1;
      isused2[k-i+n-1] = 1;
      func(k+1);
      isused[i] = 0;
      isused1[k+i] = 0;
      isused2[k-i+n-1] = 0;
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  func(0);

  cout << cnt << "\n";
}
