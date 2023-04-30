#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


pair<int,int> flower[100001];
int n;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp,tmp1,tmp2,tmp12;
        cin >> tmp;
        tmp *= 100;
        cin >> tmp1;
        cin >> tmp2;
        tmp2 *= 100;
        cin >> tmp12;
        if(tmp+tmp1<301 && tmp2+tmp12<301) continue;
        if(tmp+tmp1>=1130 && tmp2+tmp12>=1130) continue;
        flower[i] = {tmp+tmp1,tmp2+tmp12};
        
    }

    sort(flower,flower+n);



    int start=301;
    int last=0;
    int ans=0;
    int cnt = 0;


    for(int i=0; i<n; i++){ 
        if(flower[i].X>start){
            if(i==0){
                cout << 0 << "\n";
                return 0;
            }
            start = (flower[i-1].Y);
            ans++;
        }
    }
    if(start<1201){
        if(flower[n-1].X <= start){
            last = flower[n-1].Y;
            ans++;
        }
        if(last>=1201){
            cout << ans << "\n";
            return 0;
        }
        else {
            cout << 0 << "\n";
            return 0;
        }
    }
    else{
        cout << ans << "\n";
    }
    
    



}