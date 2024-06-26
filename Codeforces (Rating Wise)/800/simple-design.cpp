/*
	author: remonhasan
*/

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
  while (1) {
    int y = n, s = 0;
    while (y) s += y % 10, y /= 10;
    if (s % m == 0) break;
    n++;
  }
  cout << n << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {

    int n, m;
    cin >> n >> m;
    solve(n, m);
  }
  return 0;
}