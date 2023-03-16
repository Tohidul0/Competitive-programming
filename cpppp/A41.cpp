#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,x,a,g=0;
        long int p;
        cin>>n>>x;
        char d;
        long int sum=x;
        for(int i=1;i<=n;i++)
        {
                cin>>d>>p;
                if(d=='+')
                {
                        sum+=p;
                }
                else
                {
                        if(sum<p)
                                g++;
                        else
                                sum=sum-p;
                }

        }
        cout<<sum<<" "<<g<<endl;
}
