/* Author: Remon Hasan
   Problem : 1359A
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll card_person = n/k;
        if(card_person>=m)
        {
            cout<<m<<endl;
            continue;
        }
        ll snd_ans =(m-card_person)/(k-1);
        if((m-card_person)%(k-1)!=0)
        {
            snd_ans++;
        }
        cout<<card_person-snd_ans<<endl;
   }
}
