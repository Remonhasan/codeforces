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
#define all(a) a.begin(), a.end()
#define pb push_back
#define mp make_pair
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];

int n;
vector <int> a;

inline void brain()
{
  cin >> n;
  a.clear();
  for(int i = 0; i < 2*n ; i++)
  {
    int x; cin >> x;
    a.pb(x);
  }
}

inline void solve()
{
  sort(all(a));
  vector < pair<int,int> > pr;
  for (int i = 0; i < n; i++) {
        pr.pb(mp(a[i], a[i + n]));
  }
  int ans = 0;
  for (int i = 1; i < n; i++) {
      ans += abs(pr[i].first - pr[i - 1].first) + abs(pr[i].second - pr[i - 1].second);
  }
  cout << ans << endl;
  for (int i = 0; i < n; i++) {
      cout << pr[i].first << ' ' << pr[i].second << endl;
  }
}

int main() {
  ios;
  int t;
  cin >> t;
  while (t--) {
    brain();
    solve();
  }

  return 0;
}