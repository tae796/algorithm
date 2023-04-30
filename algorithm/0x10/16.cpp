#include <bits/stdc++.h>
using namespace std;

long long board[2][1500050];
long long sum[1500050];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> board[0][i] >> board[1][i];
  
    for (int i = n; i >= 1; i--) {
        // i번째 일에 상담을 할 수 있을 경우
        if (i + board[0][i] <= n + 1) {
        // i번째 일에 상담을 했을 때와 상담을 하지 않았을 때 얻을 수 있는 수익 중 최대 수익을 취함
            sum[i] = max(sum[i + board[0][i]] + board[1][i], sum[i + 1]);
        }
        else sum[i] = sum[i + 1];
    }

    cout << *max_element(sum+1,sum+n+1) << "\n";
}