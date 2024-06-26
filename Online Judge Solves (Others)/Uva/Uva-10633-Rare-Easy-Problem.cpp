/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: UVA 10633 - Rare-Easy-Problem
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
	while (true){
    ll N, A, i;
    scanf("%lld", &N);
    if (N == 0)
      break;
    A = N + N/9;
    if (N % 9 == 0)
      printf("%lld %lld", A-1, A);
    else
      printf("%lld", A);
    printf("\n");
  }

  return 0;
}