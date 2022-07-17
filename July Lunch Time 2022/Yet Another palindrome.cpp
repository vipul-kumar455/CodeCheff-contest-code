

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
           string s;
           cin>>s;
           string x="";
           string y="";
           for(int i=0;i<n;i++)
           {
               if(i%2==0)
               {
                   x+=s[i];
               }
               else
               {
                   y+=s[i];
               }
               
           }
           sort(x.begin(),x.end());
                      sort(y.begin(),y.end());
                      if(x==y)
                      {
                          cout<<"Yes"<<endl;
                      }
                      else
                      {
                          cout<<"No"<<endl;
                      }

           
      }
      return 0;
 }