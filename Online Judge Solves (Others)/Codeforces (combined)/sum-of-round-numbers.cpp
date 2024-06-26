/* Author: Remon hasan
   Problem: 1352A
*/
#include <bits/stdc++.h>

using namespace std;
#define pb push_back
int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		vector<int> round;
		int p = 1;
		while (N > 0) {
			if (N % 10 > 0) {
				round.pb((N % 10) * p);
			}
			N = N/10;
			p = p*10;
		}
		cout << round.size() << endl;
		for (auto number : round) cout << number << " ";
		cout << endl;
	}
}
