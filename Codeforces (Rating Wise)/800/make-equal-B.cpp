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

  int n, sum = 0;
  cin >> n;
  vector <int> a(n);
  RAB(i, 0, n) cin >> a[i], sum += a[i];
  
  int k = sum / n;

  for(int i = 0; i < n-1; i++){
    if(a[i] < k){
      cout << "NO" << endl;
      return;
    }
    a[i + 1] += a[i] - k;
    a[i] = k;
  }

  cout << "YES" << endl;
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