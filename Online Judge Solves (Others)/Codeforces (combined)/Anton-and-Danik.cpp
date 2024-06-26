/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,count(0),count1(0);
    cin>>N;
    char a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        if(a[i]=='A'){
            count++;
        }
        else if(a[i]=='D'){
            count1++;
        }
    }
    if(count>count1)
        cout<<"Anton"<<endl;
    else if (count<count1)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}

