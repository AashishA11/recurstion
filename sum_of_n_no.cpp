#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    int a[10];
    while(t--)
    {
        for(int i=1;i<=10;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
         
         for(int i=10;i>=1;)
        {

            if((k-a[i])>0)
            {
                k=k-a[i];
                a[i]=0;
              i--;
            }
            if((k-a[i])<0)
            {
                //a[i]=k-a[i];
                cout<<i<<endl;
                break;
            }
            if(a[i]==k)
            {
                a[i]=0;
                k=0;
                i--;
            }
            
        
        }
    }
}