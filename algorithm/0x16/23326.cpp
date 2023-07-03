#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set<int> s1,s2;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        //s1.insert(tmp);
        if(tmp == 1) s2.insert(i+1);
    }
    
    int pos = 1;

    for(int i=0; i<m; i++){
        int q;
        cin >> q;
        if(q==1){
            int tmp;
            cin >> tmp;
            if(s2.find(tmp) != s2.end()) s2.erase(tmp);
            else s2.insert(tmp);
        }
        else if(q==2){
            int tmp;
            cin >> tmp;
            pos = (pos+tmp-1)%n + 1; 
        }
        else if(q==3){
            if(s2.size() == 0) cout << -1 << "\n";
            else {
                set<int>::iterator it1 = s2.lower_bound(pos);
                if(it1==s2.end()) {
                    it1 = s2.begin();
                    cout << n-pos + *s2.begin() << "\n";
                }
                else{
                    cout << *it1 - pos << "\n";
                }
            }

        }
    }

    
}



//2번케이스에서 %로 해주어야함