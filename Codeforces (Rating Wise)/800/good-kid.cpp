/*
  author: remonhasan
*/

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define fl for (int i = 0; i < n; i++)
#define ll long long

int findIndex(int arr[], int size, int value) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value) {
      return i;
    }
  }
}

void solve(int n) {
  int arr[n];

  fl cin >> arr[i];

  int * smallest = min_element(arr, arr + n);
  int index = findIndex(arr, n, * smallest);
  replace(arr, arr + n, * smallest, * smallest + 1);

  ll product = 1;
  for (int i = 0; i < n; i++) {
    product = product * arr[i];
  }

  cout << product << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }
}