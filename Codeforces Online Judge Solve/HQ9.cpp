/* Author : Remon Hasan
   Problem: 133A
   University of Asia Pacific
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char  s[1000];
    int l,i,f=0;;
    while(cin>>s)
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if((s[i]=='H')||(s[i]=='Q')||(s[i]=='9'))
            {
                f++;
            }
        }
        if(f>=1)
            cout<<"YES"<<endl;
        else if (f==0)
            cout<<"NO"<<endl;
        f=0;

    }
}
