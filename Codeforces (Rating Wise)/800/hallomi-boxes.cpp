/*
	author: remonhasan
*/

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define fl for (int i = 0; i < n; i++)


void solve(int n, int k) {
  int arr[n];

  fl cin >> arr[i];

  if(is_sorted(arr, arr+n) || k > 1){
  	cout<< "YES" << endl;
  }else{
  	cout<< "NO" << endl;
  }

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    solve(n, k);
  }
}