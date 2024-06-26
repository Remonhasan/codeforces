#include<iostream>
#include<stdio.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        double r,p,s;
        cin>>a>>b;
        if(a>1000)
        {
            p = (a*b)*0.1;
            s = (a*b)-p;
            printf("%.6f\n",s);
        }
        else
        {
            r = (a*b);
            printf("%.6f\n",r);
        }
    }
}
