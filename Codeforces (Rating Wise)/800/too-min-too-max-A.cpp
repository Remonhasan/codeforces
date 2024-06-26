// author: remonhasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define VI vector < int > v;
#define PI pair < int, int > p;
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define RSN(i, s, n) for (int i = 0; i < n; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {

  int n;  
  cin >> n;

  vector<int> a(n);
  RSN(i, s, n) cin >> a[i];
  sort(a.begin(), a.end());
  // sum of the two largest differences 
  cout << 2 * (a[n - 1] - a[0]) + 2 * (a[n - 2] - a[1]) << endl;
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