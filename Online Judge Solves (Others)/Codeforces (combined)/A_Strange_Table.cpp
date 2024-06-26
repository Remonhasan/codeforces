/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include <vector>
#include<algorithm>    
#include <queue>  
using namespace std;
#define ll long long
#define ull unsigned long long

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
void solve ()
{
    ll n,m,x;
    cin>>n>>m>>x;
    x--;
    ll col = x/n;
    ll row = x%n;
    cout << row * m + col + 1 <<endl;
}


int main ()
{
    FastRead;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}