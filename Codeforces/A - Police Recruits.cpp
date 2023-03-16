#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,j=0,k=0,m;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>m;
                ;
                if(m<0&&k==0)
                        j++;
                else if(m>0)
                {
                      k=k+m ;
                      //k++;
                }
                else
                        k=k-1;
 
        }
        cout<<j<<endl;
}