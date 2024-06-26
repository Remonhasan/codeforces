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


int totaldistance (int a, int b, int c)
{
    return abs(a-b)+abs(a-c)+abs(b-c);
}

void solve()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b,c; cin>>a>>b>>c;
      int result = totaldistance(a,b,c);
      for(int da=-1;da<=1;da++){
        for(int db=-1;db<=1;db++){
            for(int dc=-1;dc<=1;dc++){
                int na = a+da;
                int nb = b+db;
                int nc = c+dc;
                result = min(result, totaldistance(na, nb, nc));
            }
        }  
      }
     cout<<result<<endl;
   }
}

int main ()
{
    FastRead;
    solve(); 
}