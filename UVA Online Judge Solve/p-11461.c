#include<stdio.h>
int main ()
{
    int a,i,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
       int count=0;
        if(a+b==0)
            break;
        for(i=a;i<=b;i++)
        {
            c=sqrt(i);
            if(c*c==i)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
