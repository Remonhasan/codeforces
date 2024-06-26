/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,H,count(0);
    cin>>N>>H;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        if(a[i]>H){
            count++;
        }
    }
    int res = count*2;
    int due = N - count;
    int ans = res+due;
    cout<<ans<<endl;
}
