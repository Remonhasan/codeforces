#include<bits/stdc++.h>
#include <cstdlib>
#include<algorithm>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool ok = true;
		for (int i = 1; i < n; ++i) {
			ok &= (a[i] - a[i - 1] <= 1);
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;

    }
}
