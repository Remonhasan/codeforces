#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << min(2*(int)count(s.begin(),s.end(),'a')-1,(int)s.size());
}
