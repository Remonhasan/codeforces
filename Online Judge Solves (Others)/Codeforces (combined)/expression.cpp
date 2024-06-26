/* Author: Remon Hasan
   Problem: 479A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pb push_back
#define ll long long
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 */
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a + b + c;
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a * b * c);
    cout << ans << endl;
}
