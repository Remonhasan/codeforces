#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
#define ll long long 
#define ull unsigned long long
#define pb push_back
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);


void solve ()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a==b || b==c || a==c) cout<<"YES"<<endl;
   else if(a==b==c) cout<<"YES"<<endl;
   else{
       cout<<"NO"<<endl;
   }
}

int main ()
{
    FastRead;
    solve(); 
}