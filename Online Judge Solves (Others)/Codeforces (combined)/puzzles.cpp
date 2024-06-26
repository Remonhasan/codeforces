/* Author: Remon Hasan
   Problem: 337A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pb push_back
#define ll long long
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 */
   int n,m;
   cin>>n>>m;
   int a[m];
   for(int i=0;i<m;i++)
   {
    cin>>a[i];
   }
   sort(a,a+m);
   int ans = a[n-1]-a[0];
    for(int i=0;i<=m-n;i++){
        if(a[i+n-1]-a[i]<ans)
            ans=a[i+n-1]-a[i];
    }
   cout<<ans<<endl;
}
