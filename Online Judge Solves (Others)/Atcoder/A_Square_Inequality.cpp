/* author: remonhasan
  University of Asia Pacific
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long 
#define ull unsigned long long
#define pb push_back
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);

void solve()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    d = a*a;
    e = b*b;
    f = c*c;
    if(d+e<f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main ()
{
    FastRead;
    solve();
    
}