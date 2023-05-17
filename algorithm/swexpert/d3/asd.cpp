#include<bits/stdc++.h>
 
using namespace std;
 
string str;
int len;
 
void InputData(){
    cin >> len;
    cin >> str;
}
 
void CheckData(){
    for(int i=0; i < len-1; i++){
        cout << "i" << i  <<" "<< str[i] << " " << str[i+1] << "\n";
        while(str[i] == str[i+1]){
            str.erase(i,2);
            i--;
        }
    }
}
 
void OutputData(int test_case){
    cout << "#" << test_case << " ";
    for(auto s : str){
        cout << s;
    }
    cout << "\n";
}
 
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int T = 10;
 
    for(int test_case = 1; test_case <= 1; test_case++){
         
        InputData();
        CheckData();
        OutputData(test_case);
 
    }
    return 0;
}