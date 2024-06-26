// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > a;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define pb push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


void solve() {

  ll P1, P2, P3; cin >> P1 >> P2 >> P3;
  ll totalPoints = P1 + P2 + P3;

  // Check totalPoints are even 
  if(totalPoints % 2 != 0){
  	cout << -1 << endl;
  	return;
  }
  
  cout << min(totalPoints/2,(P1+P2)) << endl;

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