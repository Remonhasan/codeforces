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
  int a,b,k,t;
   cin>>t;
   for (int i = 0; i < t; ++i) {
   		cin >> a >> b >> k;
   		cout << (a - b) * 1ll * (k / 2) + a * (k & 1) << endl;
   	}
}
