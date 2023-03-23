#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,sum=0;
    cin >>a;

    for(int i=0;i<a;i++){
        int a_cnt=0,b_cnt=0;
        int flag = 0;
        string b;
        cin >> b;
        stack<char> s;
        for(int j=0; j<b.size(); j++){
            
            if(a_cnt==0 && b[j] == 'A'){
                s.push(b[j]);
                a_cnt++;
            }
            else if(b_cnt==0 && b[j] == 'B'){
                s.push(b[j]);
                b_cnt++;
            }
            else if(b[j] == 'A'){
                if(s.top() != 'A') {
                    s.push(b[j]);
                    a_cnt++;
                    flag = 1;
                }
                else {
                    s.pop();
                    a_cnt--;
                }
            }
            else if(b[j] == 'B'){
                if(s.top() != 'B') {
                    s.push(b[j]);
                    b_cnt++;
                    flag = 1;
                }
                else {
                    s.pop();
                    b_cnt--;
                }
            }
        }
        if(!s.empty()) flag = 1;
        else flag = 0;
        
        if(flag == 0) sum++; 
    }

    cout << sum <<"\n";

}

//괄호랑은 다르게 열고닫고 구분이 없음
/*
2
ABABBABA
ABBBABAABABA
*/