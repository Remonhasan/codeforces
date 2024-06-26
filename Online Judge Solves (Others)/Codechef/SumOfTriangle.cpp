#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n;
cin>>t;
while(t--) {
    cin>>n;

     int a[n][n];

    for (int k = 0; k < n;k++) {

        for (int l = 0; l <= k; l++) {

            cin>>a[k][l];
        }
    }

    for (int i = n-2; i >=0; i--) {
        for (int j = 0; j<=i; j++) {
            if(a[i+1][j]>a[i+1][j+1])
               { a[i][j]+=a[i+1][j];}
            else
                {a[i][j]+=a[i+1][j+1];}
        }
    }

    std::cout << a[0][0] << std::endl;
}
	return 0;
}

