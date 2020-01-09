#include <iostream>
using namespace std;
long long int countOccurrances(long long int n,
                               int d)
{
    long long int count = 0;
    while (n > 0)
    {
        count = (n % 10 == d)
                ? count + 1
                : count;
        n = n / 10;
    }
    return count;
}


int main()
{

    int d = 4,t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << countOccurrances(n, d)
             << endl;
    }
    return 0;
}

