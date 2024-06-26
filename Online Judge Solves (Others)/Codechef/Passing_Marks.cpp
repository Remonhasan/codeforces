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
    int t;
    cin>>t;
    while(t--){
      int am,bm,cm,tm,a,b,c,sum=0;
      cin>>am>>bm>>cm>>tm>>a>>b>>c;
      sum = a+b+c;
      if((a==am || a>am) &&(b==bm || b>bm) && (c==cm || c>cm) && (sum==tm || sum>tm)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    
}

int main ()
{
    FastRead;
    solve();
}