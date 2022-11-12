#include <bits/stdc++.h>
using namespace std;

int main() {
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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    vector<int>v;
    for(auto i:mp)
    {
        v.push_back(i.second);
    }
   
    sort(v.begin(),v.end());
    int p=v.size();
    if(v[p-1]!=v[p-2])
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
	return 0;
}
