#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  list<char> L;
  
  
  string a;
  cin >> a ;
  
  

  for(int i=0; i<a.size(); i++){
    L.push_back(a[i]);
  }
  
  list<char>::iterator t = L.end();

  
  
  int b;
  cin >> b;

  for(int i=0; i<b; i++){
      char input;
      cin >> input;

      if(input == 'P') {
        char asd;
        cin >> asd;

        L.insert(t,asd);
      }
      else if(input == 'L'){
        if(t == L.begin());
        else{
          t--;
        }
        
      }
      else if(input == 'D'){
        if(t == L.end());
        else{
          t++;
        }
      }
      else if(input == 'B'){
        if(t == L.begin());
        else {
          t--;
          t = L.erase(t);
        }
        
      }

  }

  for(auto i : L) cout << i;

}