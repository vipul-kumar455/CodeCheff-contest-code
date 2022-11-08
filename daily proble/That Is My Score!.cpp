#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int p,s;
	    int a[101]={0};
	    for(int i=1;i<=n;i++)
	    {
	       cin>>p>>s;
	     
	      if(s>a[p] && p<9)
	      {
	          a[p]=s;
	      }
	       
	    }
	    int sum=0;
	    for(int i=0;i<9;i++)
	    {
	        sum+=a[i];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
