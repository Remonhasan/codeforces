/* Author: Remon Hasan
   Problem : 492A
   University of Asia Pacific
*/
#include <bits/stdc++.h>
using namespace std;
int n,h,i,cnt;
int main()
{
	cin>>n;
	while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
	cout<<h-1<<endl;
	return 0;
}
