/* author: remonhasan
 University of Asia Pacific
 */
#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define li long int

void solve()
{
  int n,k;
  while(scanf("%d %d",&n,&k)==2)
  {
    cout<<n+(n-1)/(k-1)<<endl;
  }
}

int main()
{
    solve();
}