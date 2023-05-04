#include <bits/stdc++.h>
using namespace std;

int a[500005];
int b[500005];
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;

    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0; i<n; i++){
        if(!binary_search(b,b+m,a[i])) v.push_back(a[i]);
    }

    if(v.size() == 0) cout << 0 << "\n";
    else{
        cout << v.size() << "\n";
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    }


}

// 문제 제대로 안읽어서 증가하는 순서로 출력하는건데 그렇게 하지 않아서 틀림