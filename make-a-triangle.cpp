/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>

using namespace std;

#define sf scanf

int main ()
{
    int a[4],ans;
    while((sf("%d %d %d",&a[0],&a[1],&a[2]))!=EOF){
        sort(a,a+3);
        if(a[0]+a[1]>a[2]){
            ans=0;
        }
        else{
            ans=a[2]-a[1]-a[0]+1;
        }
        cout<<ans<<endl;
    }
}
