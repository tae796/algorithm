#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set<int> s[105];
    set<int> rank;
    map<int,int> m;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int p,l;
        cin >> p >> l;
        s[l].insert(p);
        m[p] = l;
        rank.insert(l);
    }
    int mm;
    cin >> mm;

    for(int i=0; i<mm; i++){
        string a;
        cin >> a;
        if(a=="add"){
            int p,l;
            cin >> p >> l;
            s[l].insert(p);
            m[p] = l;
            rank.insert(l);
        }
        else if(a=="recommend"){
            int x;
            cin >> x;
            if(x==1){
                int tmp = *prev(rank.end());
                set<int>::iterator it1 = s[tmp].end();
                cout << *prev(it1) << "\n";
            }
            else{
                set<int>::iterator it1 = s[*rank.begin()].begin();
                cout << *it1 << "\n";
            }
        }
        else if(a=="solved"){
            int p;
            cin >> p;
            int l = m[p];
            s[l].erase(p);
            if(s[l].size() == 0) rank.erase(l);
            m.erase(p);
        }
    }

}