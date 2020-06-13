/* Author: Remon Hasan
   Problem: 268A
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
  int n,count(0);
  cin>>n;
  vector<int>h(n),a(n);
  for(int i=0;i<n;i++){
    cin>>h[i]>>a[i];
    for(int j=0;j<i;j++){
        if(h[i]==a[j])
        {
            count++;
        }
        if(h[j]==a[i]){
            count++;
        }
    }
 }
  cout<<count<<endl;
}
