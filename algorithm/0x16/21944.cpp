#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set<int> s[105];
    set<int> al[105];
    set<int> al_s[105];
    set<int> rank,algo;
    map<int,int> m,al_m;


    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int p,l,g;
        cin >> p >> l >> g;
        s[l].insert(p);
        al[g].insert(p);
        al_s[g].insert(l);
        m[p] = l;
        al_m[p] = g;
        rank.insert(l);
        algo.insert(g);
    }
    int mm;
    cin >> mm;

    for(int i=0; i<mm; i++){
        string a;
        cin >> a;
        if(a=="add"){
            int p,l,g;
            cin >> p >> l >> g;
            s[l].insert(p);
            al[g].insert(p);
            al_s[g].insert(l);
            m[p] = l;
            al_m[p] = g;
            rank.insert(l);
            algo.insert(g);
        }
        else if(a=="recommend"){
            int g,x;
            cin >> g >> x;
            if(x==1){
                set<int>::iterator it1 = s[*prev(al_s[g].end())].end();

                cout << *prev(it1) << "\n";
            }
            else{
                set<int>::iterator it1 = s[*al_s[g].begin()].begin();
                cout << *it1 << "\n";
            }
        }
        else if(a=="recommend2"){
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
        else if(a=="recommend3"){
            int x,l;
            cin >> x >> l;
            if(x==1){
                if(rank.lower_bound(l) == rank.end()) cout << -1 << "\n";
                else{
                    set<int>::iterator it1 = rank.lower_bound(l);
                    cout << *s[*it1].begin() << "\n";
                }
                
            }
            else{
                if(rank.lower_bound(l) == rank.begin()) cout << -1 << "\n";
                else{
                    set<int>::iterator it1 = rank.lower_bound(l);
                    cout << *prev(s[*prev(it1)].end()) << "\n";
                }
            }
        }
        else if(a=="solved"){
            int p;
            cin >> p;
            int l = m[p];
            int g = al_m[p];
            s[l].erase(p);
            al[g].erase(p);
            if(s[l].size() == 0) {
                rank.erase(l);
                al_s[g].erase(l);
            }
            if(al[g].size() == 0) algo.erase(g);

            m.erase(p);
            al_m.erase(p);
        }
    }

}