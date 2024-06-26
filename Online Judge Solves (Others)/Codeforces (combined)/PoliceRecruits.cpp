// Remon Hasan
// Problem : 427A
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int n,sum(0),count(0);
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0)
            sum+=a[i];
        else if(sum>0)
            sum--;
        else
            count++;
    }
    printf("%d\n",count);
}