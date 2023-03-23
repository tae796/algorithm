#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int a;
    cin >> a;
    for(int i=0; i<a; i++) {
        list<char> L;
        list<char> :: iterator t = L.end();
        string input;
        cin >> input;

        for(int j=0; j<input.size(); j++){
            if(input[j] == '<') {
                if(t == L.begin());
                else{
                    t--;
                }
            }
            else if(input[j] == '>'){
                if(t == L.end());
                else {
                    t++;
                }
            }
            else if(input[j] == '-'){
                if(t == L.begin()) ;
                else{
                    t--;
                    t = L.erase(t);
                }
            }
            else{
                L.insert(t,input[j]);
            }
        }
        
        for(auto i : L) cout << i;

        cout << "\n";




    }

}