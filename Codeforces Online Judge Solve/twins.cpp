/* Author: Remon Hasan
   Problem: 160A
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
	int n;
	while(cin>>n)
	{
		int a[n],sum(0);
		for(int i=0;i<n;++i)
		{
           cin>>a[i];
           sum+=a[i];
		}
		sum = sum/2;
		sort(a,a+n);
		int count(0),ans(0);
		for(int i=n-1;i>=0;i--)
		{
			ans+=a[i];
			count++;
			if(ans>sum)
				break;
		}
		cout<<count<<endl;
	}
}