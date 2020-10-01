#include<bits/stdc++.h>
using namespace std;
#define max 2147483647
int main()
{
    int t;
    cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int m[n];
        for (int i=0;i<n;i++)cin>>m[i];
        long long int tot=0;
        for (int i=0;i<n;i++)tot+=m[i];
        long long int tot1=0,res=max;
        for (int i=0;i<n;i++)
        {
            tot1+=m[i];
            if (abs(tot-2*tot1)<res)
            {
                res=abs(tot-2*tot1);
            }
        }
        cout<<res<<endl;
     }
     return 0;
}