#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

using ll = long long;
using lli = long long int;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

vector<int> generateBeautifulArray(int n) {
    vector<int> array;
    for (int i = 1; i <= n; ++i) {
        array.push_back(i * (i + 1)); 
    }
    return array;
}

signed main() {

    ios;
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> result = generateBeautifulArray(n);
        
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
   
    return 0;
}
