/*
    Author: Remon Hasan
    University of Asia Pacific
    Problem: CF-Round 677-Div-3-A
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int totaldigits(int x)
{
    int count=0,temp;
    temp=x;
    while(temp!=0)
    {
        count++;
        temp = temp/10;
    }
    return count;
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int alldigits = totaldigits(x);
        int lastdigit = x%10;
        if(lastdigit==1){
            if(alldigits==1){
                cout<<1<<endl;
            }
            else if(alldigits==2){
                cout<<3<<endl;
            }
            else if(alldigits==3){
                cout<<6<<endl;
            }
            else{
                cout<<10<<endl;
            }
        }
        else if(lastdigit==2){
            if(alldigits==1){
                cout<<10+1<<endl;
            }
            else if(alldigits==2){
                cout<<10+3<<endl;
            }
            else if(alldigits==3){
                cout<<10+6<<endl;
            }
            else{
                cout<<20<<endl;
            }
        }
        else if(lastdigit==3){
            if(alldigits==1){
                cout<<10*2+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*2+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*2+6<<endl;
            }
            else{
                cout<<10*3<<endl;
            }
        }
        else if(lastdigit==4){
            if(alldigits==1){
                cout<<10*3+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*3+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*3+6<<endl;
            }
            else{
                cout<<10*4<<endl;
            }
        }
        else if(lastdigit==5){
            if(alldigits==1){
                cout<<10*4+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*4+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*4+6<<endl;
            }
            else{
                cout<<10*5<<endl;
            }
        }
        else if(lastdigit==6){
            if(alldigits==1){
                cout<<10*5+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*5+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*5+6<<endl;
            }
            else{
                cout<<10*6<<endl;
            }
        }
        else if(lastdigit==7){
            if(alldigits==1){
                cout<<10*6+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*6+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*6+6<<endl;
            }
            else{
                cout<<10*7<<endl;
            }
        }
        else if(lastdigit==8){
            if(alldigits==1){
                cout<<10*7+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*7+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*7+6<<endl;
            }
            else{
                cout<<10*8<<endl;
            }
        }
        else if(lastdigit==9){
            if(alldigits==1){
                cout<<10*8+1<<endl;
            }
            else if(alldigits==2){
                cout<<10*8+3<<endl;
            }
            else if(alldigits==3){
                cout<<10*8+6<<endl;
            }
            else{
                cout<<10*9<<endl;
            }
        }
    }

}
