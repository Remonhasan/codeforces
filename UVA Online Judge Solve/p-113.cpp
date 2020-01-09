#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main ()
{
    double n,p;
    while(scanf("%lf\n%lf",&n,&p)!=EOF)
    {
        printf("%.0f\n",pow(p,1.0/n));
    }
    return 0;
    }

