/* Author: Remon Hasan
   Problem: 155A
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
    int n,count=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int max = a[0];
    int min = a[0];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
           max = a[i];
           count++;
        }
        if(a[i]<min)
        {
            min = a[i];
            count++;
        }
        
    }
    cout<<count<<endl;
}