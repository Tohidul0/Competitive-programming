#include<bits/stdc++.h>
using namespace std;
int main()
{
        string a;
        int m=0,n=0;
        cin>>a;
        for(int i=0; i<a.size(); i++)
        {
                if(a[i]>=65&&a[i]<=90)
                {
                        m++;
                }
                else
                        n++;
        }
        if(n>=m)
        {
                for(int i =0;i<a.size();i++ )
                        if(a[i]>=65&&a[i]<=90)
                        a[i]=a[i]+32;
        }
        else
        {
                for(int i =0;i<a.size();i++ )
                        if(a[i]>=97&&a[i]<=122)
                        a[i]=a[i]-32;
 
        }
      cout<<a<<endl;
 
}