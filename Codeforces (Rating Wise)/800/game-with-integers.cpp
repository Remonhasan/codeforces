/*
	author: remonhasan
*/

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
  if(n == 1 || n % 3 != 0){
    cout<<"First"<<endl;
  }else{
    cout<<"Second"<<endl;
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n ;
    solve(n);
  }
  return 0;
}