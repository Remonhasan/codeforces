/* Author: Remon Hasan
   Problem : 707A
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,M;
    cin>>N>>M;
    char a[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}
