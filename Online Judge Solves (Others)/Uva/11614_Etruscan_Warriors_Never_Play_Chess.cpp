/* Name of Allah
Author: Remon Hasan
Problem: UVA-11614
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll N,result;
    cin>>N;
    result =(sqrt(1+4*2*N)-1)/2;
    cout<<result<<endl;
}

int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}