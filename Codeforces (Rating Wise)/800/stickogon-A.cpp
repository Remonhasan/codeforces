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

  int n;
  cin >> n;
  vector < int > a(101, 0);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }

  int sum = 0;
  for (auto & s: a) {
    sum += s / 3;
  }
  cout << sum << "\n";
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