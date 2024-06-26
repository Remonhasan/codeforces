#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

void solve ()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,sum=0;
    cin>>n;
    int brain[n];
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      if(a!=2) sum++;
    }
    cout<<sum<<endl;
  }
}
int main()
{
    solve();
}