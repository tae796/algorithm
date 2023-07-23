#include <bits/stdc++.h>
using namespace std;

int d[105][105];
int nxt[105][105];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        fill(d[i],d[i]+n+1,10000000);
    }

    for(int i=0; i<m; i++){
        int a,b,c; 
        cin >> a >> b >> c;
        d[a][b] = min(d[a][b],c);
        nxt[a][b] = b;
        nxt[b][a] = a;
    }

    for(int i=1; i<=n; i++) d[i][i] = 0;

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(d[i][k]+d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k]+d[k][j];
                    nxt[i][j] = nxt[i][k];
                }
            }
        }
    }

    for(int i=1;i<=n; i++){
        for (int j=1; j<=n; j++){
            if(d[i][j] == 10000000) cout << "0 ";
            else cout << d[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(nxt[i][j] == 0) {
                cout << 0 << "\n";
                continue;
            }
            int flag = 0;
            vector<int> v;
            v.push_back(i);
            int a = nxt[i][j];
            while(a != j){
                if(a == 0) {
                    flag = 1;
                    break;
                }
                v.push_back(a);
                a = nxt[a][j];
            }
            v.push_back(j);
            if(flag){
                cout << 0 << "\n";
                continue;
            }
            cout << v.size() << " ";
            for(auto nx : v) cout << nx << " ";
            cout << "\n";
        }
    }


}


// 0을 출력할때 d[i][j]값으로 걸러내면 굳이 뒤에서 따로 처리할 필요도 없음 <- 중요