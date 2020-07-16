/*
   Author: Remon hasan
   problem : 1374
*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define pb push_back
#define ll long long

int main ()
{
   int t;
	cin >> t;
	while (t--) {
		int x, y, n;
		cin >> x >> y >> n;
		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}
	}
}
