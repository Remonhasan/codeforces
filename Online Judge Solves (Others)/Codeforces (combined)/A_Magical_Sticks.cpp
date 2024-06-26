/* Name of Allah
Author: Remon Hasan
Problem: CF-1371A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll N;
    int result;
    cin>>N;
    if(N%2){
        cout<<(N/2)+1<<endl;
    }else{
        cout<<N/2<<endl;
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