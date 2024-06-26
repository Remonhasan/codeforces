// author: remonHasan
#include<bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    bool isBalanced = false;
    int qRemaining = 0;
    for (char c : s) {
        if (c == 'Q') {
            qRemaining++;
        } else if (c == 'A') {
            if (qRemaining > 0) {
                qRemaining--;
            }
        }
    }

    if (qRemaining == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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