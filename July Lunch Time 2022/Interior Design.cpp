#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int sum=x1+y1;
	    int sum1=x2+y2;
	    if(sum>sum1)
	    {
	        cout<<sum1<<endl;
	    }
	    else
	    {
	        cout<<sum<<endl;
	    }
	    
	}
	return 0;
}
