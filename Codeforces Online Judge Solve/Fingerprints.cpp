/* Author: Remon Hasan
   solving concept: if a[i] elements is found in b[i] elements output will be the a[i]th element and c=1.
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(N,M) scanf("%d%d",&N,&M)

int main ()
{
    int N,M,C=0;
    sf(N,M);
    int a[N],b[M];
    for(int i=0;i<N;i++){
           cin>>a[i];
    }
     for(int j=0;j<M;j++){
           cin>>b[j];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(a[i]==b[j]){   // check a[i] the elements in b[i]th elements
                cout<<a[i]<<" ";
                C=1;
                break;
            }
        }
    }
}
