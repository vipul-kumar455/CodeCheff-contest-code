
#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define int ll
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i =(a);i<(b);i++)
#define pb push_back
#define print(a) cout<<(a)<<"\n";
#define printvr(v) rep(i,0,v.size()){cout<<v[i]<<" ";}cout<<"\n";
#define nl "\n"
#define con continue
#define br break









int N = 1e5+1;

vector<int> temp(N+1,0);

void seive()
{
    rep(i,2,N)
    {
        temp[i]=1;
    }
    
    rep(i,2,N)
    {
        if(temp[i])
        {
            for(int j = 2*i;j<=N;j+=i)
            {
                temp[j]=0;
            }
        }
        
    }
    
   
    
}

vector<int> compute(int i,vector<int> &flavour)
{
   
    int n = flavour.size();
     vector<int> t1(n),t2,t3;
     rep(j,0,n)
                {
                    if(flavour[j]%i==0)
                    {
                        t1[j]=1;
                        t2.pb(flavour[j]);
                    }
                }
                
                if(t2.size()!=0)
                {
                      sort(all(t2));
                }
 
                rep(j,0,n)
                {
                    if(t1[j])
                    {
                       
                        t3.pb(t2[t2.size()-1]);
                        
                        t2.pop_back();
                    }
                    else
                    {
                        t3.pb(flavour[j]);
                    }
                }
                
                
                
                rep(j,1,n)
                {
                    t3[j]=t3[j-1]+t3[j];
                }
                
              return t3;
}





signed main() {


ios_base::sync_with_stdio(false);
cin.tie(NULL);








int t=1;
cin>>t;
seive();
    while(t--)
    {
        
        int n;cin>>n;
        
        vector<int> flavour(n);
        rep(i,0,n)
        {
            cin>>flavour[i];
        }
        
        
       
        
        int q;cin>>q;
        
        vector<int> ans;
        
        vector<pair<int,int> > query;
        
        while(q--)
        {
            int p,k;
            cin>>p>>k;
            
            query.pb({p,k});
            
            //print(calc[p][k-1]);
        }
        
        map<int,vector<int> > m,m2;
        for(auto i : query)
        {
            m[i.first].pb(i.second);
        }
        
        for(auto i : m)
        {
            if(!m2.count(i.first))
            m2[i.first]=compute(i.first,flavour);
        }
        
       rep(i,0,query.size())
        {
            print(m2[query[i].first][query[i].second-1]);
        }
        
        
        
        
        
        
        

    }
}
