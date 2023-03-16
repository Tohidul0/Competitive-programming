#include<bits/stdc++.h>
using namespace std;
int power(int x)
{
        int k=1
 for(int j=x;p>0;x--)
                     {
                             k=k*10;
                     }
                     return k;
}
int main()
{
        int n;
         int x,p,y,z,m,k=1,g,l=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>x>>p>>y>>z;
                if(p==0)
                         m=x;
                else
                {
                     for(int j=p;p>0;p--)
                     {
                             k=k*10;
                     }
                     m=k*x;
                }
                if(z==0)
                         g=y;
                else
                {
                     for(int j=z;z>0;z--)
                     {
                             l=l*10;
                     }
                     g=l*y;
                }
                if(m==g)
                        cout<<"="<<endl;
                else if(m<g)
                        cout<<"<"<<endl;
                else
                        cout<<">"<<endl;
                k=1;l=1;

        }
}
