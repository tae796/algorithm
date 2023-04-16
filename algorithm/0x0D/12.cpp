#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
vector<pair<int,int>> v;
queue<tuple<int,int,int,int>> q;
int n,m;
int ans=0;
int cnt1=0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> board[i][j];
    }

    for(int i=0; i<n-3;i++){
        for(int j=0; j<m;j++){
            int tmp = 0;
            tmp = board[i][j] + board[i+1][j] + board[i+2][j] + board[i+3][j];
            cnt1 = max(tmp,cnt1);
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<m-3;j++){
            int tmp = 0;
            tmp = board[i][j] + board[i][j+1] + board[i][j+2] + board[i][j+3];
            cnt1 = max(tmp,cnt1);
        }
    }

    for(int i=0; i<n-1;i++){
        for(int j=0; j<m-1;j++){
            int tmp = 0;
            tmp = board[i][j] + board[i][j+1] + board[i+1][j] + board[i+1][j+1];
            cnt1 = max(tmp,cnt1);
        }
    }

    q.push({1,2,3,4});
    q.push({1,2,3,5});
    q.push({1,2,3,6});
    q.push({4,5,6,1});
    q.push({4,5,6,2});
    q.push({4,5,6,3});
    q.push({4,5,6,7});
    q.push({4,5,6,8});
    q.push({4,5,6,9});
    q.push({7,8,9,4});
    q.push({7,8,9,5});
    q.push({7,8,9,6});
    
    q.push({1,4,7,2});
    q.push({1,4,7,5});
    q.push({1,4,7,8});
    q.push({2,5,8,1});
    q.push({2,5,8,4});
    q.push({2,5,8,7});
    q.push({2,5,8,3});
    q.push({2,5,8,6});
    q.push({2,5,8,9});
    q.push({3,6,9,2});
    q.push({3,6,9,5});
    q.push({3,6,9,8});

    q.push({1,2,5,6});
    q.push({4,5,2,3});
    q.push({1,4,5,8});
    q.push({7,4,5,2});
    q.push({2,5,6,9});
    q.push({8,5,6,3});
    q.push({7,8,5,6});
    q.push({9,8,5,4});

    ans = 0;
    int cnt = q.size();
    for(int i=0; i<n-2; i++){
        for(int j=0; j<m-2; j++){   
            for(int k=0; k<cnt; k++){ 
                int a,b,c,d;
                tie(a,b,c,d) = q.front();
                q.push({a,b,c,d});
                q.pop();
                ans = max(ans,board[i+(a-1)/3][j+(a-1)%3]+board[i+(b-1)/3][j+(b-1)%3]+board[i+(c-1)/3][j+(c-1)%3]+board[i+(d-1)/3][j+(d-1)%3]);
            }
        }
    }
    
    ans = max(ans,cnt1);
    cout << ans << "\n";
}


// 같은 경우일때는? 제외하고 해보자 -> 그래서 틀림
// 처음 생각이 틀림 16개의 최댓값이 9개의 최댓값이 아님 그럼 전체를다 해야하나?
// 시간초과일줄알고 전체 다 안했는데 전체 하는게 정답이었다.