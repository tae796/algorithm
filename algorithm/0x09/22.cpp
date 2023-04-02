#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[200002];
int vis[200002];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    int cnt=1;
    memset(board,0,sizeof(board));
    memset(vis,0,sizeof(vis));

    cin >> a >> b;
    if(a==b) {
        cout << 0 << "\n" << a <<"\n";
        return 0;
    }
    if(a>b){
        cout << a-b << "\n";
        for(int i=a; i>=b; i--)
            cout << i << " ";
        cout << "\n";
        return 0;
    }
    queue <pair<int,int>> q;
    stack <int> s;
    stack <pair<int,int>> m;

    vis[a] = 1;
    q.push({a,0});



    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int dir=0; dir<3; dir++){
            int nx;
            if(dir==0) nx = cur.X + 1;
            else if (dir==1) nx = cur.X - 1;
            else nx = cur.X*2;
            if(nx<0 || nx>=b*2) continue;
            if(vis[nx]) continue;
            if(nx == b){
                cout << vis[cur.X] << "\n";
                cout << a << " ";
                int tmp,op;

                for(int i=0; i<vis[cur.X]; i++){ //m스택에 넣어둔 것중에 같은 값이 있는지 확인하고 있으면 s라는 스택에 
                    if(i == 0) tmp = cur.X;
                    while(!m.empty()){
                        if(m.top().X == tmp){
                            s.push(m.top().X);
                            op = m.top().Y;
                            m.pop();
                            break;
                        }
                        else m.pop();

                    }

                    if(op == 0) tmp = tmp -1;
                    else if (op == 1) tmp = tmp +1;
                    else if (op == 2) tmp = tmp/2;
                    
                } 
                for(int i=0; i<vis[cur.X]; i++){
                    if(!s.empty()){
                        cout << s.top() << " ";
                        s.pop();
                    }    
                }
                cout << nx <<"\n";
                return 0;
            }
            vis[nx] = vis[cur.X]+1;
            q.push({nx,dir});
            m.push({nx,dir});  
                   
        }
    }


}

// 시간초과가 났다 반례 : 45000 60000
// map함수는 insert를 하면 자동으로 key순으로 정렬해준다 (map 쓸 때 유의할 것) -> 이거 때문에 2시간 날려먹음