#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<4)
        cout<<-1<<endl;
        else if(n==4)
        {
            cout<<3<<" "<<1<<" "<<4<<" "<<2<<"\n";
        }
        else{
            long long Pop=(n%2==0)?n/2:n/2+1;
            for(long long i=1;i<=Pop;i++)
            {
                cout<<i;
                if(i+Pop<=n)cout<<" "<<Pop+i;
                if(i!=Pop)cout<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
