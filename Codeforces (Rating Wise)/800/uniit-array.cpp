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

  int n, count1 = 0, count2 = 0, ans = 0; cin >> n; 
  vector < int > a(n);
  for(int i=0;i<n;i++) 
  {
    cin >> a[i];
    if(a[i] == 1) count1++;
    else count2++;
  }
  
  while(count1 - count2 <0 || count2 % 2) {
    count1++;
    count2--;
    ans++;
  }

  cout << ans << endl;

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