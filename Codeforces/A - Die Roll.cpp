#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,s,g,w=0;
        cin>>a>>b;
        if(a>b)
        {
                s=6-a+1;
                if(6%s==0)
                {
                        cout<<"1/"<<6/s<<endl;
                }
                else
                        {
                                for(int i=2;i<=s;i++)
                                {
                                        if(s%i==0&&6%i==0)
                                        {
                                               g=i;
                                                w++;
                                        }
                                }
                                if(w==0)
                                        cout<<s<<"/"<<6<<endl;
                                else
                                        cout<<s/g<<"/"<<6/g<<endl;
                        }
 
        }
        else if(a<b)
        {
                s=6-b+1;
                if(6%s==0)
                {
                        cout<<"1/"<<6/s<<endl;
                }
                else
                        {
                                for(int i=2;i<=s;i++)
                                {
                                        if(s%i==0&&6%i==0)
                                        {
                                               g=i;
                                                w++;
                                        }
                                }
                                if(w==0)
                                        cout<<s<<"/"<<6<<endl;
                                else
                                        cout<<s/g<<"/"<<6/g<<endl;
                        }
        }
        else
        {
             s=6-a+1;
                if(6%s==0)
                {
                        cout<<"1/"<<6/s<<endl;
                }
                else
                        {
                                for(int i=2;i<=s;i++)
                                {
                                        if(s%i==0&&6%i==0)
                                        {
                                                 g=i;
                                                w++;
                                        }
                                }
                                if(w==0)
                                        cout<<s<<"/"<<6<<endl;
                                else
                                        cout<<s/g<<"/"<<6/g<<endl;
                        }
 
        }
}
