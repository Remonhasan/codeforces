/* Author : Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int l,i,j,c=0;
    char s[10000];
    gets(s);
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l; i++)
    {
        if(s[i]>96&&s[i]<123)
        {
            c++;
            if(s[i]==s[i+1])
                c--;
        }

    }
    cout<<c<<endl;
    c=0;
}
