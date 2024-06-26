// author: remonHasan
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    ll n, sum = 0, ans = 21; cin>>n;
    vector<ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    if(sum&1){
        for(auto &it:a){
            ll i=it,operations=0;
            while(!((i+it)&1)){
                operations++;
                i/=2;
            }
            ans=min(ans,operations);
        }
    }
    else{
        ans=0;
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