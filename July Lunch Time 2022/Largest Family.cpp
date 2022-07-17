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
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long int sum=0,i=0,cnt=0;
	    while(i<n)
	    {
	        sum+=a[i];
	        if(sum>=n)break;
	        cnt++;
	        i++;
	    }
	    cout<<cnt<<endl;
	    
	}
	return 0;
}
