#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=0,n=0,w=0,e=0;
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;
    }
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]>=65&&b[i]<=90)
            b[i]=b[i]+32;
    }
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[i])
        {
            m++;
            if(m==a.size())
            {
                n++;
            }
        }
        else if(a[i]>b[i])
        {
            w++;
            break;
        }
        else
        {
            e++;
            break;
        }
    }
    if(n>0)
        cout<<"0"<<endl;
    else if(w>0)
        cout<<"1"<<endl;
    else if(e>0)
        cout<<"-1"<<endl;
 
 
}