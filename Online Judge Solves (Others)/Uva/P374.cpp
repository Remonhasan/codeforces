#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll bigmod (ll b, ll p, ll m)
{
    if(p==0)
        return 1;

    else if(p%2==1)
    {
        int x = b%m;
        int y = (bigmod(b,p-1,m))%m;
        return (x*y)%m;
    }

    else if(p%2==0)
    {
        int x = (bigmod(b,p/2,m))%m;
        return (x*x)%m;
    }
}

int main ()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
        cout<<bigmod(b,p,m)<<endl;
}
