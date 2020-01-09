#include<stdio.h>
int main ()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        int g=0;
        if(n==0)
            break;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                g+=gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
