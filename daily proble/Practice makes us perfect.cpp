#include <iostream>
using namespace std;

int main() {
 
 int n=4;
	int p1[n];
	for(int i=0;i<n;i++)
	{
	cin>>p1[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    if(p1[i]>=10)
	    {
	        cnt++;
	    }
	}
	cout<<cnt<<endl;
	
	
	return 0;
}
