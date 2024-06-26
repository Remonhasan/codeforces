/* Author : Remon Hasan
   Problem: 281A
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    cin>>a;
    if(a[0]>='a'&& a[0]<='z'){
        a[0]=a[0]-32;
        cout<<a<<endl;
    }
    else{
        cout<<a<<endl;
    }

}



