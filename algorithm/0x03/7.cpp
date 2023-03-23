#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a;
  
  cin >> a;
  

  for(int i=0; i<a; i++){
    string input, output;

    int input_alpabet[26];
    int output_alpabet[26];
    fill(input_alpabet,input_alpabet+26,0);
    fill(output_alpabet,output_alpabet+26,0);

    int count = 0;
    cin >> input >> output;

    if(input.size() != output.size()) {
      cout << "Impossible" <<"\n";
      continue;
    }

    for(int j=0; j<input.size(); j++){
      input_alpabet[input[j]-'a']++;
      output_alpabet[output[j]-'a']++;
    }
    for(int j=0; j<26; j++){
      if(input_alpabet[j] == output_alpabet[j]) ;
      else {
        count++;
      }
    }

    if(count == 0) cout << "Possible" <<"\n";
    else cout << "Impossible" <<"\n";
  }

  
}