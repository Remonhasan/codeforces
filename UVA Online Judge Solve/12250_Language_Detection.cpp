/* Name of Allah
Author: Remon Hasan
Problem: UVA-12250
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    int i = 1;
    cin>>s;
    while(s!="#"){
    printf("Case %d: ", i);
        
        if (s == "HELLO")
            printf("ENGLISH\n");
        else if (s == "HOLA")
            printf("SPANISH\n");
        else if (s == "HALLO")
            printf("GERMAN\n");
        else if (s == "BONJOUR")
            printf("FRENCH\n");
        else if (s == "CIAO")
            printf("ITALIAN\n");
        else if (s == "ZDRAVSTVUJTE")
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
        ++i;
        
        cin >> s;
    }  
}

int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    solve();
}