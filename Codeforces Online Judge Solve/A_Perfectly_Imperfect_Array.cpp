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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        ll check = sqrt(a[i]);
        if(check*check !=a[i]){
            cout<<"YES"<<endl;
            return;
          }
      }  
    cout<<"NO"<<endl;
}

int main ()
{
    FastRead;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}