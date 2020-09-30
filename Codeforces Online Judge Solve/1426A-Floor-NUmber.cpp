/* Remon Hasan - UAP* - */
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long

int main ()
{
/*
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
*/
  ios_base::sync_with_stdio(0); cin.tie(nullptr);  cout.tie(0);
  int n,x,t;
  double result;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n>>x;
   }
  for(int i=0;i<t;i++)
  {
    if(n<=2)
      cout<<1<<endl;
    else
    {
      result =((x-3)/x);
      cout<<floor(result)+2<<endl;
    }
  }
}
