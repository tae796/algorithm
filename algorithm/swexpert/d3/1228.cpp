#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int n2;
    cin >> n2;


    for(int q=0; q<n2; q++){
        string tmp;
        cin >> tmp;
        int a,b;
        cin >> a >> b;
        int arr[15];         
        for(int i=0; i<b; i++){
            cin >> arr[i];
        }

        v.insert(v.begin()+a,arr,arr+b);
    
    }

    
    for(int  i=0; i<10; i++) cout << v[i] << " ";
    cout << "\n";
}

