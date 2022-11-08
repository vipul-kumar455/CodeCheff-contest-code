#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	     int fr[101]={0};
	      int mx=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	         
	    }
	      for(int i=0;i<n;i++)
	    {
	         
	        fr[a[i]]++;
	         mx=max(fr[a[i]],mx);
	    }
	    
	  
	  
	   
	    cout<<n-mx<<endl;
	}
	return 0;
}
