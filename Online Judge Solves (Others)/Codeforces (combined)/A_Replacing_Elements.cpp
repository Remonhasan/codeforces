/* Name of Allah
Author: Remon Hasan
Problem: CF - 1473A - DIV 02
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

int solve() {
    int n,d;
    cin>>n>>d;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if((a.back()<=d) || (a[0]+a[1]<=d)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
       solve();
    }
}