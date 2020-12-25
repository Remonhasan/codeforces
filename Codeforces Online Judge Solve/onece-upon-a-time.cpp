/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: Codeforces
*/
#include<bits/stdc++.h>
#include<string.h>
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
typedef vector<int> v;
typedef vector<bool>B;


ll EU(ll n, ll m, ll &a, ll &k)
{
  if(n==0 && m==0 && a==0 && k==0) return 0;
  if(m==0){
    a = 1;
    k = 0;
    return n;
  }

  ll x1,y1;
  ll d = EU(m,n%m,x1,y1);
  a = y1;
  k = x1 - y1*(n/m);
  return d;
}

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
	ll n,m,a,k;
	while(scanf("%lld %lld %lld %lld",&n,&m,&a,&k)==4)
    {
        cout<<EU(n,m,a,k);
    }
  return 0;
}