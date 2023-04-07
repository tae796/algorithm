#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int arr[4096][4096];

void func(int n, int a, int b){
    if(n == 1){
        arr[a][b] = cnt++;
        arr[a][b+1] = cnt++;
        arr[a+1][b] = cnt++;
        arr[a+1][b+1] = cnt++;
    }
    else{
        func(n-1,a,b);
        func(n-1,a,b+(1<<(n-1)));
        func(n-1,a+(1<<(n-1)),b);
        func(n-1,a+(1<<(n-1)),b+(1<<(n-1)));
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,r,c;
    cin >> n >> r >> c;
    memset(arr,0,sizeof(arr));
    func(n,0,0);
    
    cout << arr[r][c] << "\n";
    
}





//이렇게 풀면 메모리가 초과때문에 컴파일 에러가 발생함