/* Author : Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int a[5], position = 3;

int main() {
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++) {
        if (a[i] != a[i + 1]) {
            position--;
        }
    }
    cout << position;
}
