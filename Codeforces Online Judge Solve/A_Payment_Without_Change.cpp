/* author: remonhasan
  University of Asia Pacific
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long 
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);

void solve()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b,n,s;
      cin>>a>>b>>n>>s;
      int ans = s%n;
      if(ans<=b && 1ll * a * n + b >= s) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;  
   }
}

int main ()
{
    FastRead;
    solve(); 
}