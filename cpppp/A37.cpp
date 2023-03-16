#include<bits/stdc++.h>
using namespace std;
int main()
{
        long int a,b;
        long int c,g=0,m=0,k=0;
        int arr[100000];
        cin>>a>>b>>c;
        for(long int i=0;i<a;i++)
                cin>>arr[i];
        for(long int i=0;i<a;i++)
        {
                if(arr[i]<=b)
                {
                        m+=arr[i];
                        if(m>c)
                        {
                                k++;
                                m=m-c;
                        }
                }
        }
        cout<<k<<endl;

}
