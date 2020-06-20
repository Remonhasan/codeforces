/* Author: Remon Hasan
   Problem: 1367A
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
 */   int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        string b;
        cin >> b;
       string a = b.substr(0, 2);
    for (int i = 3; i < b.size(); i += 2) {
            a += b[i];
        }

        cout << a << endl;
    }

 
}
