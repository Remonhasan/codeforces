#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin>>N;

    int mn = 1e9, mx = 0;
    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << max(0, (mx-mn)-N+1);

    return 0;
}
