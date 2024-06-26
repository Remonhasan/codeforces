#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solve()
{
  int n, k; cin >> n >> k;
  string str; cin >> str;
  unordered_map<char, int> frequency;

  // Count frequency of each character in the string
  for (char ch : str) {
    frequency[ch]++;
  }

  int oddCount = 0;
  
  // Count how many characters have odd occurrences
  for (const auto& pair : frequency) {
      if (pair.second % 2 != 0) {
          oddCount++;
      }
  }
   cout << (oddCount > (k + 1) ? "NO" : "YES") << nl;
}

int main() {
  ios;
  int t; cin >> t;
  while(t--){
    solve();
  }
  
  return 0;
}