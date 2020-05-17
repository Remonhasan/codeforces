/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,count(0);
    cin>>N;
    char a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}
