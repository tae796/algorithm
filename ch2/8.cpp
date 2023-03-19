#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input, output;

    int input_alpabet[26];
    int output_alpabet[26];
    fill(input_alpabet,input_alpabet+26,0);
    fill(output_alpabet,output_alpabet+26,0);

    int count = 0;
    cin >> input >> output;


    for(int i=0; i<input.size(); i++){
        input_alpabet[input[i]-'a']++;
    }



    for(int i=0; i<output.size(); i++){
        output_alpabet[output[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(input_alpabet[i] == output_alpabet[i]) ;
        else {
            if(input_alpabet[i] > output_alpabet[i]) count = count + input_alpabet[i] - output_alpabet[i];
            else count = count + output_alpabet[i] - input_alpabet[i];
        }
    }

    cout << count << "\n";


  
}