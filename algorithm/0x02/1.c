#include <stdio.h>

int main() {
    int n, x;
    int count = 0;
    scanf("%d",&n);
    scanf("%d",&x);

    int a[n];
    for(int i = 0 ; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        a[i] = tmp;
    }
    
    for(int i = 0 ; i<n ; i++){

        if(a[i]<x) {
            if(count == 0) {
                printf("%d",a[i]);
                count++;

            }
            else{
                printf(" %d",a[i]);
            }
                

        }   
    
    }
    return 0;
}