// author: remonhasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define VI vector < int > v;
#define PI pair < int, int > p;
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {

  int n, a, b;
  cin >> n >> a >> b;

  if (2 * a <= b) {
    cout << n * a << endl;
  } else {
    int pairs = n / 2;
    int remainder = n % 2;
    int cost = pairs * b + remainder * a;
    cout << cost << endl;
  }
}

int main() {
  ios;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}