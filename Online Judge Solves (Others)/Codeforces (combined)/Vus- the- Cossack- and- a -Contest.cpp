/* Author: Remon Hasan
  solving concept: if number of pens and notebooks are is equal or more than
  Number of contestant for that the answer will be true.
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,M,K;
    cin>>N>>M>>K;
    if(M>=N && K>=N){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
