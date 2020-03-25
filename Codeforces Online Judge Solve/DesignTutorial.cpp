#include <bits/stdc++.h>
using namespace std;

int comsum(int n)
{
    if(n%2==0)
        cout<<n-8<<" 8";
    else
        cout<<n-9<<" 9";
}

int main()
{
    int a;
    cin>>a;
    comsum(a);
}

