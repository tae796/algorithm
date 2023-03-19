#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int arr[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int start,end;
    int tmp;

    for(int i=0; i<10; i++){
        cin >>start >> end;

        for(int i=0; i<(end-start+1)/2;i++){
            swap(arr[start+i],arr[end-i]);
        }

        // if(end-start % 2 == 1){
        //     for(int i=0;i<(end-start+1)/2;i++){
        //         tmp = arr[start+i];
        //         arr[start+i] = arr[end-i];
        //         arr[end-i] = tmp;
        //     }
        // }
        // else if (end-start == 0) ;
        // else{
        //     for(int i=0;i<(end-start)/2;i++){
        //         tmp = arr[start+i];
        //         arr[start+i] = arr[end-i];
        //         arr[end-i] = tmp;
        //     }
        // }

    }

    for(int i=1;i<21;i++) cout << arr[i] << ' ';

    
    return 0;

}