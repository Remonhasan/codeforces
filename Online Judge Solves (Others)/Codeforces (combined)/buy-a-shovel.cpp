/* Author: Remon Hasan
   Problem: 732A
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
   int k,r,ans;
   cin>>k>>r;
   for(int i=1;i<10;i++){
   	if((((k*i)-r)%10==0) || ((k*i)%10==0)){
   		cout<<i<<endl;
   		break;
   	}
   }
}
