/* Author: Remon Hasan */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main ()
{
    int t;
    cin>>t;
    while(t--){
       ll N,M;
    cin>>N>>M;
    ll sum=0;
    for(int i=0;i<N;i++){
        ll x;
        cin>>x;
        sum=sum+x;
    }
    cout<<min(sum,M)<<endl;
    }
}
