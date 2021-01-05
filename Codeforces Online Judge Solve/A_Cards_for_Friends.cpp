/* Name of Allah
Author: Remon Hasan
Problem: CF-1472A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int w,h,result=1;
    ll n;
    cin>>w>>h>>n;
    while(w%2==0){
        w = w/2;
        result = result*2;
    }
    while(h%2==0){
        h = h/2;
        result = result*2;
    }
    if(result>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    } 
}

int main ()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}