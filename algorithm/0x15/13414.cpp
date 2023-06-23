#include <bits/stdc++.h>
using namespace std;

string tmp[500005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<string,int> stu;
    vector<string> v;


    int n,m;
    int total=0;
    cin >> m >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        if(stu.find(a) != stu.end()){ // find 성공
            tmp[stu[a]] = "dummy";
            stu[a] = i+1;
            tmp[i+1] = a;

        }
        else{ // find 실패
            stu.insert({a,i+1});
            tmp[i+1] = a;
            total++;
        }
    }

    int cnt = 1;
    int ans = 0;

    while(ans!=m){
        if(ans>=total) break;
        if(tmp[cnt] == "dummy") {
            cnt++;
            continue;
        }
        cout << tmp[cnt] << "\n";
        cnt++;
        ans++;
    }
}


//insert로 넣는게 아니라 22번째 줄처럼 넣어야함 insert로 넣으면 중복이 허용되는듯?