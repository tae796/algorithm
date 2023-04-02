#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    for(int i=0; i<a;i++){
        deque<int> d;
        int pop_cnt = 0,pop_cnt1 = 0; //정방향이면 pop_cnt, 역방향이면 pop_cnt1
        int size = 0;
        int flag=0; //정방향이면 0, 역방향이면 1
        for(int k=0; k<3; k++){
            if(k==0){//수행할 함수
                string func;
                cin >> func;
                for(int j=0; j<func.size(); j++){
                    if(func[j] == 'R'){
                        if(flag == 0) flag = 1;
                        else flag = 0;
                    }
                    else{
                        if(flag == 0) pop_cnt++;
                        else pop_cnt1++;                
                    }
                }
            }
            else if(k==1){//배열에 들어있는 수의 개수
                cin >> size;
            }
            else{// 배열에 들어있는 정수
                string input;
                cin>> input;
                if(size == 0);
                for(int j=1; j<input.size(); j++){
                    int tmp = 0;
                    if(input[j] == ']') break;
                    while(input[j] !=','){
                        tmp = tmp*10 + input[j]-'0'; 
                        j++;                       
                        if(input[j] == ']') break;
                    }
                    d.push_back(tmp);
                }
                
            }
        }
        if(size != d.size()) cout << "error" << "\n";
        else{
            if(size>=(pop_cnt+pop_cnt1)){
                if(size==0 && (pop_cnt !=0 || pop_cnt1 !=0)) cout << "error" << "\n";
                else{
                    for(int j=0; j<pop_cnt; j++) d.pop_front();
                    for(int j=0; j<pop_cnt1; j++) d.pop_back();                        
                    
                    if(flag == 0){
                        cout << "[";
                        for(int j=0; j<d.size(); j++){
                            if(j == d.size()-1) cout << d[j];
                            else cout << d[j] << ",";
                        }
                        cout << "]" << "\n";
                    }
                    else{
                        cout << "[";
                        for(int j=d.size()-1; j>=0; j--){
                            if(j == 0) cout << d[j];
                            else cout << d[j] << ",";
                        }
                        cout << "]" << "\n";
                    }
                }
            }
            else{
                cout << "error" << "\n";
            }
        }


    }

}

//1. 빈 배열에서 R만 실행했을 경우 에러는 뜨지 않아야하는데 에러가 뜸
//2. 입력 size와 배열의 개수가 다를경우 error 처리
//3. RDR과 같이 R과 D가 섞여들어올 경우 제대로 작동하지 않음

//백준정답비교 : input을 다 받고 시작했으면 더 쉬웠을것! 나는 하나받고 처리하고 했기때문에 RDR 같은 경우가 헷갈렸음