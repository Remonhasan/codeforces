#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,N;
    string s;
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> N >> s;
        int res = N;
        for(int j = 0; j < N; ++j)
            if(s[j] == '8'){
                res = j;
                break;
            }

        if(N - res >= 11)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}
