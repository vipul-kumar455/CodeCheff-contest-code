#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main() 
{
    int T1111=1;
    cin >> T1111;
    for(int i = 1; i <= T1111; i++)
    {
        int n11; cin>>n11;
        vector<int> v(n11), a; 
        map<int, int> m;
        for(int i=0; i<n11; i++){
            cin>>v[i];
            m[v[i]]++;
        }
        for(auto i:m){
            a.emplace_back(i.second);
        }
        int amax=*max_element(a.begin(), a.end());
        cout<<ceil(log2(amax))<<"\n";
    }
    return 0;
}
