#include<iostream>

using namespace std;

int main ()
{
    int t,stop,enter,calculate(0),result(0);
    cin>>t;
    while(t--)
    {
        cin>>stop>>enter;
        calculate = calculate-stop;
        calculate = calculate+enter;

        if(calculate>result)
        {
            result=calculate;
        }

    }
    cout<<result<<endl;

}
