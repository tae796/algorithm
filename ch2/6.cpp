#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int stu[2][6];
  for(int i=0; i<2; i++)
    fill(stu[i],stu[i]+6,0);

  int a,max;
  int count = 0;
  cin >> a >> max ;


  for(int i=0; i<a; i++){
    int sex, grade;
    cin >> sex >> grade;
    stu[sex][grade-1]++;
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<6; j++){
      if(stu[i][j]%max == 0)
        count = count + stu[i][j]/max;
      else count = count + (stu[i][j]/max) + 1;
    }
  }

  cout << count << "\n";

  


}