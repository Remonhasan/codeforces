/* Name of Allah
Author: Remon Hasan
Problem: CF-266-DIV02
*/
#include<bits/stdc++.h>
using namespace std;


void solve(int n, int m, int a, int b)
{
    if(m*a<=b) cout<<n*a<<endl;
    else{
        cout << (n/m) * b + min((n%m) * a, b) << endl;
    }
    
}


int main ()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    solve(n,m,a,b);
}