#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
int main ()
{

    int t;
    vector<int>a(3);
    cin>>t;
    while(t--)
    {
      for(int i=0;i<a.size();i++)
        {
            cin>>a[i];
        }
       sort(a.begin(), a.end());
		if (a[1] != a[2]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
		}
    }
    return 0;
}
