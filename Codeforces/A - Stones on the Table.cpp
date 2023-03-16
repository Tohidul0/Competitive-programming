#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,j=0;
        char a,b,g;
        cin>>n;
        if(n==1)
                cout<<"0"<<endl;
        else{
                cin>>a;
                g=a;
        for(int i=2;i<=n;i++)
        {
                cin>>b;
                if(g==b)
                {
                        j++;
                }
                else
                {
                        g=b;
                }
 
        }
        cout<<j<<endl;
        }
}