#include<bits/stdc++.h>
using namespace std;
int main()
{
 int N,r,M,i;
 while(cin>>N)
 {
     if(N%2==0)
     {
         M=N/2;
         cout<<M<<endl;
         for(i=1;i<=M;i++)
         {

            printf("2 ");
         }
     }
     else
     {
         r=(N-3);
         M=(r/2);
         printf("%d\n",M+1);
         for(i=1;i<=M;i++)
         {
           printf("2 ");
         }
         cout<<"3";
     }
     cout<<endl;
 }


}
