#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    std::vector<int>v ;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
       int p=n-i;
       if(binary_search(v.begin(),v.end(),p))
       cnt++;
       
    }
    cout<<cnt;
    return 0;
}
