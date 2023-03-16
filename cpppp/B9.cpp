//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000]={0};
    int n,a,g=0;
    cin>>n>>a;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    if(arr[a]==1)
        g++;
    //int k=1;
    //n++;
    //while(n--)
    for(int k=1;k<=n;k++)
    {
        if(a-k>=1&&a+k<=n)
        {
            if(arr[a-k]==1&&arr[a+k]==1)
                g=g+2;
        }
        else
        {
            if(a-k<1)
            {
                if(arr[a+k]==1)
                    g++;
            }
            else if(a+k>n)
            {
                if(arr[a-k])
                    g++;
            }
        }
       //k++;
    }
    cout<<g<<endl;
}
