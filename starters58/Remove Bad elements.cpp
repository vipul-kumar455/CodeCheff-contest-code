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
     int max_count = 0, res = -1; 
for (auto i : mp) { 
    if (max_count < i.second) { 
        res = i.first; 
        max_count = i.second; 
    }
    
} 
cout<<n-max_count<<endl;
}

	return 0;
}
