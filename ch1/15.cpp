#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int> pq;
    int num;
    int sum1=0,sum2=0;

    cin >> num;

    int time[num];

    for(int i=0; i<num; i++) cin >>time[i];


    for(int i=0; i<num; i++){
        int ycount=1,mcount=1;
        int tmp1 = time[i];
        int tmp2 = time[i];

        while(tmp1 >= 30){
            ycount++;
            tmp1 = tmp1-30;
        }
        while(tmp2 >= 60){
            mcount++;
            tmp2 = tmp2-60;
        }


        sum1 = sum1 + ycount*10;
        sum2 = sum2 + mcount*15;
    }
    if(sum1 > sum2) cout << "M " << sum2;
    if(sum1 == sum2) cout << "Y M " << sum2;
    if(sum1 < sum2) cout << "Y " << sum1;
    



    return 0;

}