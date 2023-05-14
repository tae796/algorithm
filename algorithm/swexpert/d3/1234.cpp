#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string a;

    cin >> n >> a;

    while(1){
        int flag = 0;
        string::iterator iter;
        iter = a.begin();
        for(int i=0; i<a.size()-1; i++){
            iter++;
            if(a[i] == a[i+1]) {
                a.erase(iter);
                iter--;
                a.erase(iter);
                flag = 1;
                break;
            }
        }
        if(flag == 0) break;
    }

    cout << a << "\n";
    
}