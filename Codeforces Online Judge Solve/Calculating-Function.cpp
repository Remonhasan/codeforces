/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    ll N;
    cin>>N;
    if(N%2==0)
        cout<<N/2<<endl;
    else
        cout<<-(N+1)/2<<endl;
}
