#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int count[26];
  string input;
  fill(count,count+26,0);

  cin >> input;

  for(int i=0; i<input.size(); i++){
     int tmp = input[i] - 'a';
     count[tmp]++;
  }

  for(int i=0; i<26;i++) cout << count[i] << ' ' ;


}