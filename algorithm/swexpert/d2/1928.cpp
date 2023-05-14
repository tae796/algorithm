#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    cin >> a;

    typedef unsigned char uchar;
    static const std::string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 
    std::string out;
    std::vector<int> T(256, -1);
 
    for (int i = 0; i < 64; i++)
        T[b[i]] = i;
 
    int val = 0, valb = -8;
 
    for (uchar c : a) {
        if (T[c] == -1)
            break;
 
        val = (val << 6) + T[c];
        valb += 6;
 
        if (valb >= 0) {
            out.push_back(char((val >> valb) & 0xFF));
            valb -= 8;
        }
    }
    cout << out;

}


// 그냥구현하려니 노가다가 심할거같아서 구글링했는데 b스트링을 만들면 생각보단 쉽게 만들어지네