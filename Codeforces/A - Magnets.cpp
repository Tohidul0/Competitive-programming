#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,j=1;
        char a,b;
        char g;
        cin>>n;
        cin>>b;
        g=b;
        for (int i=2;i<=n*2;i++)
        {
                cin>>a;
                if(a!=g)
                {
                        g=a;
                }
                else
                {
                        j++;
                        g=a;
                }
        }
        cout<<j<<endl;
}