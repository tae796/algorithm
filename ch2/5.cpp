#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a,input;
  cin >> a;
  int arr[a];
  int count[201];
  fill(count,count+201,0);
  for(int i=0; i<a; i++) cin >>arr[i];
  cin >> input ;

  for(int i=0; i<a; i++){
      count[arr[i]+100]++;
  }
  cout << count[input+100] << "\n";



}