/* Author : Remon Hasan
   Contest: ketek[i]
   problem solve: A [ Reverse Binary ]
*/
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ull unsigned long long int

ull db(ull N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }

    return B_Number;
}

ull reverseBits(ull n)
{
    ull rev = 0;
    while (n > 0)
    {
        rev <<= 1;
        if (n & 1 == 1)
            rev ^= 1;
        n >>= 1;

    }
    return db(rev);
}

ull decimalToBinary(ull N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }

    return reverseBits(B_Number);

}


int main()
{

    int N;
    cin>>N;
    cout << db(N)<<endl;

    return 0;
}
