#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
bool isStrongPassword(const string &password) {
    bool hasLetter = false;
    bool hasDigit = false;
    char lastLetter = '\0';
    char lastDigit = '\0';
    
    for (char ch : password) {
        if (isdigit(ch)) {
            if (hasLetter) return false; 
            if (hasDigit && ch < lastDigit) return false; 
            lastDigit = ch;
            hasDigit = true;
        } else {
            if (hasLetter && ch < lastLetter) return false; 
            lastLetter = ch;
            hasLetter = true;
        }
    }
    
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string password;
        cin >> n >> password;
        cout << (isStrongPassword(password) ? "YES" : "NO") << endl;
    }
    return 0;
}