#include<stdio.h>
int main()
{
    long int ch[100],a,b,c,i,j,l=0;
    while(scanf("%ld",&a)==1)
    {
        if(a<0)
            break;
        for(i=0 ; ; i++)
        {

            b=a%3;
            ch[i]=b;
            a=a/3;
            if(a==0)
                break;
        }
        for(j=i; j>=0; j--)
        {
            printf("%ld",ch[j]);
        }
        printf("\n");

    }
    return 0;
}


