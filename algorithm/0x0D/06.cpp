#include <bits/stdc++.h>
using namespace std;

deque<int> board[4];
int n;
int a,b;
int tmp = 0;


void move(int k,int dir){
    if(dir==1){
        tmp = board[k].back();
        board[k].pop_back();
        board[k].push_front(tmp);
    }
    else{
        tmp = board[k].front();
        board[k].pop_front();
        board[k].push_back(tmp);
    }
}


int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);


    for(int i=0; i<4; i++){
        string a;
        cin >> a;
        for(int j=0; j<8; j++){
            if(a[j] == '1') board[i].push_back(1);
            else board[i].push_back(0);
        

        }
    }


    cin >> n;
    while(n--){
        cin >> a >> b;

        if(board[0][2]==board[1][6] && board[1][2]==board[2][6] && board[2][2]==board[3][6]){ // 123같음
            move(a-1,b);
        }
        else if(board[0][2]==board[1][6] && board[1][2]==board[2][6]){ // 12 같음
            if(a==3){
                move(a-1,b);
                move(a,-b);
            }
            else if(a==4){
                move(a-1,b);
                move(a-2,-b);
            }
            else move(a-1,b);
        }
        else if(board[0][2]==board[1][6] && board[2][2]==board[3][6]){ // 13 같음
            if(a==2){
                move(a-1,b);
                move(a,-b);
            }
            else if(a==3){
                move(a-1,b);
                move(a-2,-b);
            }
            else move(a-1,b);
        }
        else if(board[1][2]==board[2][6] && board[2][2]==board[3][6]){ // 23 같음
            if(a==1){
                move(a-1,b);
                move(a,-b);
            }
            else if(a==2){
                move(a-1,b);
                move(a-2,-b);
            }
            else move(a-1,b);

        }
        else{
            if(board[0][2]==board[1][6]){ // 1 같음
                if(a==2){
                    move(a-1,b);
                    move(a,-b);
                    move(a+1,b);
                }
                else if(a==3){
                    move(a-1,b);
                    move(a-2,-b);
                    move(a,-b);
                }
                else if(a==4){
                    move(a-1,b);
                    move(a-2,-b);
                    move(a-3,b);
                }
                else{
                    move(a-1,b);
                }
            }
            else if(board[1][2]==board[2][6]){// 2 같음
                if(a==1){
                    move(a-1,b);
                    move(a,-b);
                }
                else if(a==3){
                    move(a-1,b);
                    move(a,-b);
                }
                else if(a==4){
                    move(a-1,b);
                    move(a-2,-b);
                }
                else{
                    move(a-1,b);
                    move(a-2,-b);
                }
            } 
            else if(board[2][2]==board[3][6]){ // 3 같음
                if(a==1){
                    move(a-1,b);
                    move(a,-b);
                    move(a+1,b);
                }
                else if(a==2){
                    move(a-1,b);
                    move(a-2,-b);
                    move(a,-b);
                }
                else if(a==4){
                    move(a-1,b);
                }
                else{
                    move(a-1,b);
                    move(a-2,-b);
                    move(a-3,b);
                }
            }
            else{
                if(a==1){
                    move(a-1,b);
                    move(a,-b);
                    move(a+1,b);
                    move(a+2,-b);
                }
                else if(a==2){
                    move(a-1,b);
                    move(a-2,-b);
                    move(a,-b);
                    move(a+1,b);
                }
                else if(a==3){
                    move(a-1,b);
                    move(a-2,-b);
                    move(a,-b);
                    move(a-3,b);
                }
                else{
                    move(a-1,b);
                    move(a-2,-b);
                    move(a-3,b);
                    move(a-4,-b);
                }
            }

        }

    }
    
    int ans = 0;

    if(board[0][0] == 1) ans +=1;
    if(board[1][0] == 1) ans +=2;
    if(board[2][0] == 1) ans +=4;
    if(board[3][0] == 1) ans +=8;
    
    cout << ans << "\n";


}


//답지 보고 이해할 것 (너무 무식하게 풀었음)