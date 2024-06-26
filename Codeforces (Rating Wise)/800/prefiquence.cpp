// author: remonHasan
#include<bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int solve() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    auto isSubsequence = [&](int k) {
        int i = 0, j = 0;
        while (i < k && j < m) {
            if (a[i] == b[j]) {
                ++i;
            }
            ++j;
        }
        return i == k;
    };

    int left = 0, right = min(n, m), result = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (isSubsequence(mid)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
  ios;
  int t;
  cin >> t;
  while (t--) {
    cout << solve() << endl;
  }

  return 0;
}