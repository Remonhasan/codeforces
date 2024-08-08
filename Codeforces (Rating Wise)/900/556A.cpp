#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
  int n;
  string s;
  cin >> n >> s;

  int countZero = 0, countOne = 0;
  for(char c : s){
  	if(c == '0') countZero++;
  	else countOne++;
  }

  cout << abs(countZero - countOne) << nl;
}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  solve();
  
  return 0;
}