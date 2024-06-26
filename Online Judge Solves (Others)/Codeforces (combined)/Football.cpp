/* Author: Remon Hasan
   Problem : 96A
*/
#include <bits/stdc++.h>
using namespace std;

int Substring(string s)
{

	int ans = 1, temp = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			++temp;
		}
		else {
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);
    return ans;
}

int main()
{
	string s;
	cin>>s;
	if(Substring(s)>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

