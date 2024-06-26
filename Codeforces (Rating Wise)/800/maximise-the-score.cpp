// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


void solve() {

  ll n,sum = 0; cin >> n;
  vector <ll> v(2*n);
  for(auto &it:v)  cin>>it;
  sort(v.begin(), v.end());
  for (ll i = 0; i < 2*n ; i += 2){
  	sum += v[i];
  }
  cout << sum << endl;
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