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
#define T cin >> t;
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
 
    ll intro, extro, uni;
    cin >> intro >> extro >> uni;
    ll needExtro = (3 - extro % 3) % 3;
    if (extro > 0 && needExtro > uni) {
      cout << "-1";
      nl
      return;
    }

    uni -= needExtro;
    extro += needExtro;

    ll result = intro + uni / 3 + (uni % 3 + 1) / 2 + extro / 3;
    cout << result;
    nl
}

int main() {
  ios;
  ll t;
  cin >> t;
  while(t--){
    solve();
 }

 return 0;
}