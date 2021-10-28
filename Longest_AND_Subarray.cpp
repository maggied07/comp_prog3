#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    IOS;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x=1,s=0;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            x*=2;
            if(x>n)
            {
                ll temp=n-(x/2)+1;
                ll temp2=(x/2)-(x/4);
                if(temp>temp2)
                s=n-(x/2)+1;
                else
                s=temp2;
                break;
            }
            if(x==n)
            {
                s=n-(x/2);
                break;
            }
        }
        cout<<s<<endl;
    }
}