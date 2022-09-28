#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int test;
    cin >> test;
    while(test--)
    { 
        int h = 0;
        int q;
        cin >> q;
        vector<int> o(q);
        for(int i=0;i<q;i++)
        {
            cin>>o[i];
        }
        for(int i=0;i<q;i++)
        {
            if(o[i]%2==0)
            {
                h++;
            }
        }
        if(h==q)
        {
            cout << "0" ;
        }
        else
        {
            cout << h ;
        }
        cout << "\n";
    } 
    return 0;
}
