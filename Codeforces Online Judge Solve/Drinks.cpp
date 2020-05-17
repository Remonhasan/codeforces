/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    int a[N];
    double sum(0.00);
    for(int i=0;i<N;i++){
       cin>>a[i];
       sum=sum+a[i];

 }
     printf("%lf\n",sum/N);
     return 0;
}

