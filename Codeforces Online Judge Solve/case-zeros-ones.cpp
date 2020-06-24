/* Author: Remon Hasan
   Problem: 556A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pb push_back
#define ll long long
int main ()
{
/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/
    int n, c;
    string s;
    cin>>n>>s;
    int o, z;
    o= z= 0;
    for(int i= 0; i<n; i++){
        if(s[i] == '1') o++;
        else z++;
    }
   cout<< n- 2*min(o, z) <<endl;
  return 0;
}