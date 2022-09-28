#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int x;
    cin>>x;
    int p=x/25;
    // if(x<=25)
    // cout<<1<<endl;
   if(x%25==0)
    cout<<p<<endl;
    else cout<<p+1<<endl;
}
	return 0;
}
