/* Author: Remon Hasan
   Problem: 432A
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
*/		int n,k,count(0);
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
        }
		for(int i=0;i<n;i++){
			if(5-a[i]>=k)
				count++;
        }
       cout<<count/3<<endl;
}