#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int a,b,c,p,q,r;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        p=a*a;
        q=b*b;
        r=c*c;
        if(a!=0 || b!=0 || c!=0)
        {
            if(p==(q+r))
                cout<<"right"<<endl;
            else if(q==(p+r))
                cout<<"right"<<endl;
            else if (r==(p+q))
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;

        }
    }
}
