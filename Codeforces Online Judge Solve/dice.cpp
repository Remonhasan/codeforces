#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    ll m,n,k;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m==2||m==3||m==4||m==5||m==6||m==7) cout<<"1"<<endl;
        else
        {
            k=m/2; cout<<k<<endl;
        }
    }
}
