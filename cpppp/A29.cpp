#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,g=0;
        int arr1[100],arr2[100];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>arr1[i]>>arr2[i];
        }
        for(int k=1;k<=n;k++)
        {
                for(int l=1;l<=n;l++)
                {
                        if(arr1[k]==arr2[l])
                                g++;
                }
        }
        cout<<g<<endl;
}
