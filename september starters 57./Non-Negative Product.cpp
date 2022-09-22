#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int a[n];
        int c=0;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                x=1;
            }
            if(a[i]<0)
            {
                c++;
            }

        }
        if(c==0 || c%2==0 || x==1)
        {
            printf("0\n");

        }
        else
            printf("1\n");




        t--;
    }
    return 0;
}
