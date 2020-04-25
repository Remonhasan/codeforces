/* Author: Remon Hasan
   University of Asia Pacific
 */
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    if(N%4==0) puts("1 A");
    else if(N%4==1) puts("0 A"); //-> 33%4 = 1 , 0 A
    else if(N%4==2) puts("1 B");//->
    else if(N%4==3) puts("2 A");
    return 0;
}
