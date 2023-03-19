#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count[10];
    fill(count,count+10,0);

    int input;
    cin >> input;

    while(input>0){
        count[input%10]++;
        input = input/10;
    }
    
    int max = *max_element(count,count+10);
    int index = 0;
    int max_count = 0;
    for(int i=0; i<10; i++){
        if(max == count[i]) {
            index = i;
            max_count++;
        }
    }
    if(max_count == 1){
        if(index == 6 || index == 9) max = (count[6] + count[9] + 1)/2;
        cout << max << "\n";
    }
    else {
        cout << max << "\n";
    }


    
    
    
}