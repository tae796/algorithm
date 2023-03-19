#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    int result;
    int count[10];
    fill(count,count+10,0);
    cin >> a >> b >> c;
    result = a * b * c;

    while(result>=10){
        int tmp = result%10;
        count[tmp]++;

        result = result/10;
    }
    count[result]++;
    
    for(int i=0; i<10; i++) cout << count[i] << "\n";

}