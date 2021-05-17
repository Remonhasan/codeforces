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
       int h,m;
       cin>>h>>m;
       if(h==23) cout<<60-m<<endl;
       else if(h==23 && m==0) cout<<60<<endl;
       else if(h==0) cout<<1380+(60-m)<<endl;
       else{
           int newhour = 23-h;
           int newminutes = 60-m; 
           cout<<newhour*60+newminutes<<endl;
       }
   }
}

int main ()
{
    FastRead;
    solve(); 
}