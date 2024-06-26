#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j, k;
    int n, m, r, l;
    bool f;

    cin>>l>>r;
    for(int i = l; i <= r; i++)
    {
        k = i;
        int a[10] = {0};
        f = true;

        while(k)
        {
            m = k % 10;
            a[m]++;
            k /= 10;

            if(a[m] > 1){
                f = false;
                break;
            }
        }

        if(f){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"-1"<<endl;

    return 0;
}
