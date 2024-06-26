// author: remonhasan 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string b;
        cin >> n >> b;
 
        vector<char> uniqueChars(b.begin(), b.end());
        sort(uniqueChars.begin(), uniqueChars.end());
        uniqueChars.erase(unique(uniqueChars.begin(), uniqueChars.end()), uniqueChars.end());
 
        unordered_map<char, char> decodeMap;
        int len = uniqueChars.size();
        for (int i = 0; i < len; ++i) {
            decodeMap[uniqueChars[i]] = uniqueChars[len - 1 - i];
        }
 
        string s(n, ' ');
        for (int i = 0; i < n; ++i) {
            s[i] = decodeMap[b[i]];
        }
 
        cout << s << "\n";
    }
 
    return 0;
}