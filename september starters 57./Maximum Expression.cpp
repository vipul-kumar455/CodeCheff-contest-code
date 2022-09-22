#include <bits/stdc++.h>
using namespace std;
void descOrder(string &s)
{
    sort(s.begin(), s.end(), greater<char>());
}

int main() {
 
    int temp;
    cin>>temp;
    for(int k = 0; k < temp; k++){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int plus = 0, minus1 = 0, dig = 0;
      int d[10] = {0};
      for (int i = 0; i < n; i++) {
          if(s[i] == '+'){
              plus++;
          }
          else if(s[i]=='-'){
              minus1++;
          }
          else{
              d[s[i]-'0']++;
              dig++;
          }
      }
      string ans = "";
      int  i = 9;
      while(dig-(plus+minus1)){
          if(d[i] == 0){
              i--;
              continue;
          }
          ans += ('0'+i);
          d[i]--;
          dig--;
      }
      while(plus){
          if(d[i] == 0){
              i--;
              continue;
          }
          ans += '+';
          ans += ('0'+i);
          d[i]--;
          plus--;
      }
      while(minus1){
          if(d[i] == 0){
              i--;
              continue;
          }
          ans += '-';
          ans += ('0'+i);
          d[i]--;
          minus1--;
      }
      cout<<ans;
      cout<<"\n";
  }
    return 0;
}
