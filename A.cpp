/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: atcoder beginners A
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long



int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
/*  
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 */
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(a*d)-(b*c)<<endl;
	return 0;
}