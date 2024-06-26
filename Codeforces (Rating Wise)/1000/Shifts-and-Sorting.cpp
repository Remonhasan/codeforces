// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


void solve()
{
  string input; 
  getline(cin, input);

  vector<int> s;
  for (char c : input) {
      s.push_back(c - '0');
  }

  for (int num : s) {
      cout << num << " ";
  }
  cout << endl;

  int zeroes = 0;
  for (int num : s) {
      if (num == 0) {
          zeroes++;
      }
  }

  cout << zeroes << endl;

  vector<int> cnt(2, 0);
  ll ans = 0;

  for (int c : s) {
      cnt[c]++;
      if (c == 0) {
          ans += (cnt[1] > 0) ? 1 : 0;
      } else {
          ans += (zeroes - cnt[0]);
      }
  }

  cout << ans << endl;
}

int main() {
  ios;
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    solve();
  }

  return 0;
}