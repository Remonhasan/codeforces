/* Author: Remon Hasan
   Problem: 1294A
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
  cin>>t;
for(int i = 0; i < t; ++i) {
     int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    n -= 2 * a[2] - a[1] - a[0];
    if (n < 0 || n % 3 != 0) {
        cout << "NO" << endl;
    } else {
         cout << "YES" << endl;
    }
}
    
}
