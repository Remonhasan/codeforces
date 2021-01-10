/* Name of Allah
Author: Remon Hasan
Problem: Atcoder-Round 188 - A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

void solve(int x, int y)
{
    int init;
    if(x<y){
        init = x+3;
        if(init>y){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        init = y+3;
        if(init>x){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int x,y;
    cin>>x>>y;
    solve(x,y);
}