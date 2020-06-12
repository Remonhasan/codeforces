/* Author: Remon Hasan
   Problem: 451A
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
   int a,b;
   cin>>a>>b;
   if(a>b){
    swap(a,b);
   }
   if(a%2==0)
    cout<<"Malvika"<<endl;
  else
    cout<<"Akshat"<<endl;
}
