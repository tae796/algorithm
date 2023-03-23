#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr1[4];
    int arr2[4];
    int arr3[4];
    int count[3] = {0};

    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
    cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3];
    cin >> arr3[0] >> arr3[1] >> arr3[2] >> arr3[3];
    
    for(int i=0; i<4; i++){
        if(arr1[i] == 1) count[0]++;
        if(arr2[i] == 1) count[1]++;
        if(arr3[i] == 1) count[2]++;
    }

    for(int i=0; i<3; i++){
        if(count[i] == 4) cout << "E" << "\n";
        else if(count[i] == 3) cout << "A" << "\n";
        else if(count[i] == 2) cout << "B" << "\n";
        else if(count[i] == 1) cout << "C" << "\n";
        else if(count[i] == 0) cout << "D" << "\n";
    }
    
    return 0;
}