/* Name of Allah
Author: Remon Hasan
Problem: Atcoder-Round 188 - B
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long

void solve(int N)
{
    std::vector <int> a(N);
    std::vector<int> b(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int j=0;j<N;j++){
        cin>>b[j];
    }
    int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);
    if(r1==0) cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
}

int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int N;
    cin>>N;
    solve(N);
}