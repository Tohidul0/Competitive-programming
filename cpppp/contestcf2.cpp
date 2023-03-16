#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,x,f;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%7==0)
            cout<<a<<endl;
        else
        {


            if(a<100)
            {
                f=(a/10)*10;
                for(int i=0; i<=9; i++)
                {
                    x=f+i;
                    if(x%7==0)
                    {
                        cout<<x<<endl;
                        break;
                    }
                }

            }
            else
            {
                f=(a/10);
                if(f*100<a)
                    f=f*100;
                else
                    f=f*10;
                for(int i=0; i<=9; i++)
                {
                    x=f+i;
                    if(x%7==0)
                    {
                        cout<<x<<endl;
                        break;
                    }
                }

            }
        }
    }
}
