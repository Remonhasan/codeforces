#include<bits/stdc++.h>
using namespace std;

int main ()
{
     cin.tie(0);
    ios_base::sync_with_stdio(0);
    map<string,int>anton;
    anton["Tetrahedron"]=4;
    anton["Cube"]=6;
    anton["Octahedron"]=8;
    anton["Dodecahedron"]=12;
    anton["Icosahedron"]=20;
    int N,result=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string a; cin>>a;
        result=result+anton[a];
    }
    cout<<result<<endl;

}
