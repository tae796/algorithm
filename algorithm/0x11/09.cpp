#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int sum=0;
    int one_cnt=0;
    int z_cnt=0;
    vector<int> v,v1;
    cin >> n;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp==0) z_cnt++;
        else if(tmp<0) v1.push_back(tmp);
        else if(tmp==1) one_cnt++;
        else v.push_back(tmp);
    }

    if(!v1.empty()){
        sort(v1.begin(),v1.end());    
        if(v1.size()%2 == 0){
            for(int i=0; i<v1.size(); i++){
                sum += v1[i]*v1[i+1];
                i++;
            }
        }
        else{
            for(int i=0; i<v1.size()-1; i++){
                sum += v1[i]*v1[i+1];
                i++;
            }
            if(z_cnt == 0) sum += v1[v1.size()-1];
            else ;
        }
    }

    if(!v.empty()){
        sort(v.begin(),v.end());
        if(v.size()%2 == 0){
            for(int i=0; i<v.size(); i++){
                sum += v[i]*v[i+1];
                i++;
            }
        }
        else{
            for(int i=1; i<v.size(); i++){
                sum += v[i]*v[i+1];
                i++;
            }
            sum += v[0];
        }
    }

    cout << sum+one_cnt <<"\n";
    

}