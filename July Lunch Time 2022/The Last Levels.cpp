#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3)
	    {
	        cout<<x*y<<endl;
	    }
	    else
	    {
	        int p=x/3;
	       
	        int rem=x%3;
	        if(rem==0)
	        {
	            cout<<(x*y)+(p*z)-z<<endl;
	        }
	        else
	        cout<<(x*y)+p*z<<endl;
	    }
	}
	return 0;
}
