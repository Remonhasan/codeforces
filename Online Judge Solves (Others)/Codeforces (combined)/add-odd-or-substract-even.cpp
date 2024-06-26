/* Author: Remon Hasan
   Problem: 1311A
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
   int t;
   cin >> t;
   while (t--) {
      int a, b;
      cin >> a >> b;
      if (a == b) cout << 0 << endl;
      else cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
   }
}