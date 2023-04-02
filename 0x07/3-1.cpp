#include<bits/stdc++.h>

using namespace std;

vector<int> split(const string &str, char sep)
{
    vector<int> tokens;
    int i;
    stringstream ss(str);
    while (ss >> i) {
        tokens.push_back(i);
        if (ss.peek() == sep) {
            ss.ignore();
        }
    }
    return tokens;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int user_cnt;
    cin >> user_cnt;

    while(user_cnt--)
    {
        bool front_back = false;
        int num, len, result = 0;
        char action;
        string user_str, user_arr;
        deque<char> DQ_str;
        deque<int> DQ_arr;

        cin >> user_str >> len >> user_arr;

        vector<int> arr = split(user_arr.substr(1, user_arr.length()-2), ','); 

        for(int i=0; i < len; i++) // 배열을 큐에 담기
        {
            DQ_arr.push_back(arr[i]);
        }


        for(auto s: user_str)
        {
            if(!DQ_arr.empty())
            {
                if(s == 'R')
                {   
                    if(front_back == 0) front_back = 1;
                    else if(front_back == 1) front_back = 0;
                }
                else if(s == 'D')
                {
                    if(front_back == false) DQ_arr.pop_front();
                    else if(front_back == true) DQ_arr.pop_back();
                }
            }
            else
            {
                result = 1;
                break;
            }
        }


        // 출력
        if(result == 1)
        {
            cout << "error" << "\n";
            continue;
        }

        cout << "[";
        if(front_back == false) 
        {
            while(!DQ_arr.empty())
            {
                cout << DQ_arr.front();
                DQ_arr.pop_front();
                if(!DQ_arr.empty()) cout << ",";
             }
        }
        else
        {
            while(!DQ_arr.empty())
            {
                cout << DQ_arr.back();
                DQ_arr.pop_back();
                if(!DQ_arr.empty()) cout << ",";
            }
        }
        cout << "]\n";
    }
}

// split 함수 분석해보기

// 틀린 이유 : 시간 초과 (swap 사용)
// 틀린 이유 : continue 사용해야하는데 break 사용함.
// 틀린 이유 : = 를 사용해야 하는데 == 를 씀.
// 틀린 이유 : ???

