#include <bits/stdc++.h>
using namespace std;

int func(string a){
    string tmp = "",tmp1="";
    tmp = tmp+a[0]+a[1];
    tmp1 = tmp1+a[3]+a[4];

     int return_value = stoi(tmp)*60 + stoi(tmp1);

    return return_value;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<string> set;
    unordered_set<string> result;


    string start,close,end;
    cin >> start >> close >> end;
    int s = func(start);
    int c = func(close);
    int e = func(end);


    int ans = 0;

    while(1){
        string a,b;
        cin >> a >> b;
        if(cin.eof() == true) break;
        int time = func(a);
        
        if(time<=s){
            set.insert(b);
        }
        else if(time>=c && time<=e){
            if(set.find(b) != set.end())
                result.insert(b);
        }

    }


    cout << result.size() << "\n";

    

}