/* author: remonhasan
  University of Asia Pacific
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
#define ll long long 
#define ull unsigned long long
#define pb push_back
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
void solve()
{
    int a,b,n,sum=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size()-1;i++)
    {
        cin>>v[i];
        
    }
    cin>>a>>b;
    for(int i=a-1;i<b-1;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}

int main ()
{
    FastRead;
    solve();
}