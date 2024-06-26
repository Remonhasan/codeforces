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

  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c) {
    cout << "STAIR" << endl;
  } else if (a < b && b > c) {
    cout << "PEAK" << endl;
  } else {
    cout << "NONE" << endl;
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