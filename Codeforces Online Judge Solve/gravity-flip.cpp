/* Author: Remon Hasan
   Problem: 405A
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
*/	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}