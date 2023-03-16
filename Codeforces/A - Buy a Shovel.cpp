#include<bits/stdc++.h>
using namespace std;
int main()
{
        int  a,b,m=1;
        cin>>a>>b;
        while(1)
        {
                int g=a*m;
                if((g%10==b)||(g%10==0))
                {
                        cout<<m<<endl;
                        break;
                }
                m++;
        }
 
}
 