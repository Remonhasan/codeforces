/*
    Author: Remon Hasan
    University of Asia Pacific
    Problem: CF-Round 422-Div2-A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long int

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/
    ll a,b,ans=1;
    cin>>a>>b;
    for(ll i=1;i<=min(a,b);i++){
        ans *= i;
    }
    cout<<ans<<endl;
}
