#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t,a, b,flag;
    cin>>t;
    while(t--)
    {
        cin >>a>>b;
        for (int i = a; i <= b; i++)
        {

            if (i == 1 || i == 0)
                continue;
            flag = 1;

            for (int j = 2; j <= sqrt(i); ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                cout << i <<endl;
        }
    }
    return 0;
}


