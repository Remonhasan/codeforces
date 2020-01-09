// Remon Hasan 
// HackerRank 30 days challenge
// Day 05 
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,s;
    cin >> n;
    if(n>= 2 && n<=20)
    {
        for(i=1;i<=10;i++)
        {
            s = n*i;
            printf("%d x %d = %d\n",n,i,s);
        }
    }
    return 0;
}
