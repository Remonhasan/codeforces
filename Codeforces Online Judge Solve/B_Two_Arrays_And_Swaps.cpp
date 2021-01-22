/* Name of Allah
Author: Remon Hasan
Problem: CF - 1353B
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long
#define lli long long int
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define MEM(a,x)        memset(a,x,sizeof(a))
#define E "\n"
#define pb              push_back

void solve() {
    int n,k,sum=0;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    // sort desending order
    sort(b.rbegin(),b.rend());
    for (int i = 0; i < n; ++i) {
			if (i < k){
              sum+= max(a[i], b[i]);
            } 
			else{
            sum += a[i];
            } 
		}
    cout<<sum<<E;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

}