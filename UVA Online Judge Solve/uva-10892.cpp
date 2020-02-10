#include <bits/stdc++.h>
#define FR(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;


int lcm(int a, int b) {
    return a * (b / __gcd(a, b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n && n != 0) {
        vi d;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                d.push_back(i);
                if (n / i != i) d.push_back(n / i);
            }
        }

        int c = 0;
        for (int i = 0; i < d.size(); i++) {
            for (int j = i; j < d.size(); j++) {
                if (lcm(d[i], d[j]) == n) c++;
            }
        }
        cout << n << " " << c << "\n";
    }
}