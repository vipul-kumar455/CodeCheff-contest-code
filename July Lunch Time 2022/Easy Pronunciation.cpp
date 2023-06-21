#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return ( ch == 'a' || ch == 'e' ||
             ch == 'i' || ch == 'o' ||
             ch == 'u');
}
void solve(string s,int n)
{
    for(int i=0;i<n;i++)
	  {
	      if(!isVowel(s[i]))
	      {
	          int cnt=0;
	          while(i<n && !isVowel(s[i]))
	          {
	              ++i;
	              ++cnt;
	          }
	          if(cnt>=4)
	          {
	              cout<<"No"<<endl;
	             return;
	          }
	      }
	  }
	  cout<<"Yes"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	  solve(s,n);
	    
	}
	return 0;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	  solve(s,n);
	    
	}
	return 0;
}
