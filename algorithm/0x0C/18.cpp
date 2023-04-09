#include <bits/stdc++.h>

using namespace std;

int arr[2][10];
int mx = 0;
int cnt = 0;
int n;

void func(int k){
 if(k==n){
  mx = max(mx,cnt);
  return ;
 }
 if(cnt == n-1 || arr[0][k]<=0){
  func(k+1); 
  return ;
 }
 for(int i=0; i<n; i++){
  if( i == k || arr[0][i]<=0) continue;
  arr[0][i] -= arr[1][k];
  arr[0][k] -= arr[1][i];
  if(arr[0][i] <=0) cnt++;
  if(arr[0][k] <=0) cnt++;
  func(k+1);
  if(arr[0][i] <=0) cnt--;
  if(arr[0][k] <=0) cnt--;
  arr[0][i] += arr[1][k];
  arr[0][k] += arr[1][i];
 }
}


int main() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cin >> n;
 for(int i=0; i<n; i++) cin >> arr[0][i] >> arr[1][i];
 func(0);
 cout << mx;
}
