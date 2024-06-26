/* Author: Remon Hasan
   Problem: Boy Or Girl [Codeforces Round #146]
   Solution Description: Input a string -> count the distinct characters-> if even then [Chat with her!] else [Ignore him].
*/
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void dischar(string a , int l)
{
    int count=0;
    for(int i=0;i<l;++i)
    {
        // count dischar
        if(a[i]!=a[i+1]){
            count++;
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}

int main ()
{
    char a[100];
    cin>>a;
    int l = strlen(a);
    sort(a,a+l);
    dischar(a,l);
}

