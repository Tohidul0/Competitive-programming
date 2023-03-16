//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string b;
    cin>>a>>b;
    int x=b.size(),y=s.size();
    if(a=='R')
    {
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(b[i]==s[j])
                {
                    b[i]=s[j-1];
                    break;
                }
            }
            cout<<b[i];
        }
    }
    else if(a=='L')
    {
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(b[i]==s[j])
                {
                    b[i]=s[j+1];
                    break;
                }
            }
            cout<<b[i];
        }
    }
    cout<<endl;
}
