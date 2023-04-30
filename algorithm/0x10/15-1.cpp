#include <bits/stdc++.h>
using namespace std;

int board[2][16];
int isused[1016];
int sum;
int n,a,b;
vector<int> v;

void func(int k){
    if(k>=n){
        v.push_back(sum);
        return ;
    }
    for(int i=0; i<n; i++){
        if(!isused[i]){
            int tmp = board[0][i];
            for(int j=0; j<tmp; j++) isused[i+j] = 1;
            sum += board[1][i];
            func(k+tmp);
            sum -= board[1][i];
            for(int j=0; j<tmp; j++) isused[i+j] = 0;               
        }
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0; i<n; i++) cin >> board[0][i] >> board[1][i];
    func(0);

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << *max_element(v.begin(),v.end()) << "\n";

    
}