/* Name of Allah
Author: Remon Hasan
Problem: CF-1374B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll N)
{
    int count = 0, count1 = 0;
    while(N % 2 == 0){
        N /=2;
        count++;
    }
    while(N % 3 == 0){
        N /=3;
        count1++;
    }
    if (N == 1 && count <= count1) {
		cout << 2 * count1 - count << endl;
	} else {
		cout << -1 << endl;
	}   
}

int main ()
{
    int t;
    cin>>t;
    ll N;
    while(t--){
        cin>>N;
        solve(N);
    }
}