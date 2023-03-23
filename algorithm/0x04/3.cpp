#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  list<int> L;
  
  int n, k;

  cin >> n >> k;

  for(int i=1; i<=n; i++){
    L.push_back(i);
  }
  list<int> :: iterator t = L.begin();

  
  for(int i=0; i<n; i++){
    if(i == 0){
      if(n == 1) {
        cout << "<1>";
        return 0;
      }
      for(int  j=1; j<k; j++) t++;
      cout << "<" << *t << ", ";
      t = L.erase(t);
      t--;
    }
    else{
      for(int j=0; j<k; j++){

        if(*t == L.back()) {
          t = L.begin();
        }
        else {
          t++;
        }
      }
    
      if(i == n-1) cout << *t << ">";
      else {
        cout << *t << ", ";
        t = L.erase(t);
        t--;
      }
    }
  
  }

}