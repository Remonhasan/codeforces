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
   int t;
   cin>>t;
   while(t--)
   {
       int n,ctr=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
    for(int i=0; i<n; i++)
    {
        ctr=0;
        for(int j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(a[i]==a[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d\n",i+1);
        }
    }
 }
}

int main ()
{
    FastRead;
    solve(); 
}