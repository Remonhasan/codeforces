/* Name of Allah
Author: Remon Hasan
Problem: CF - 1474A
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long

int solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string brain = "1";
    for(int i=1;i<n;i++){
        if ('1' + s[i] != brain[i - 1] + s[i - 1]){
            brain = brain +"1";
        }else{
            brain = brain + "0";
        }
    }
    cout<<brain<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

}