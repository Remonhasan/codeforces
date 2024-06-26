// Author: Remon Hasan
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    ll N,K,ans=0;
    cin>>N>>K;
    int p = (2*N);
     ans = ans+(p+K-1)/K;
     p = (5*N);
    ans = ans+(p+K-1)/K;
     p = (8*N);
    ans = ans+(p+K-1)/K;

    cout<<ans<<endl;
}
