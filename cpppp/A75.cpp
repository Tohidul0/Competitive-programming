//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,k;
    long long int h;
    cin>>a>>k;
    if(a%2==0)
    {
        if(k<=a/2)
        {
            h=k*2-1;
        }
        else
        {
            h=k-(a/2);
            h*=2;
        }
        cout<<h;
    }
    else
    {
        if(k<=(a/2)+1)
            h=k*2-1;
        else
        {
            h=k-((a/2)+1);
            h*=2;

        }
        cout<<h;
    }

}
