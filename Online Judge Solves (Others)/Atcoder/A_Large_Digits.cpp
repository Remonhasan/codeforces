/* Name of Allah
Author: Remon Hasan
Problem: ATcoder-187A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int a, int b)
{
    int sum1 =0,sum2=0;
    while(a!=0){
        sum1 = sum1 + a%10;
        a = a/10;
    }
    while(b!=0){
        sum2 = sum2+ b%10;
        b = b/10;
    }
    if(sum1>sum2) cout<<sum1<<endl;
    else{
        cout<<sum2<<endl;
    }
}

int main ()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
}