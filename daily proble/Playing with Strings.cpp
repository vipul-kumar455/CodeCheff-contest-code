#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	 while(t--)
	 {
	     int n;
	     cin>>n;
	     string s,r;
	     cin>>s>>r;
	   
	    sort(s.begin(),s.end());
	    sort(r.begin(),r.end());
	     if(s==r)
	     {
	         cout<<"YES"<<endl;
	     }
	     else
	     {
	         cout<<"NO"<<endl;
	     }
	 }
	return 0;
}