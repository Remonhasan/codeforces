/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,count(1);
    cin>>N;
    int a[N];
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<N-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
