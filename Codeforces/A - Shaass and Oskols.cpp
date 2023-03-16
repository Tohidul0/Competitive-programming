#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[1000];
        int n,a,g,h;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>arr[i];
        }
        cin>>a;
        for(int j=1;j<=a;j++)
        {
                cin>>g>>h;
 
                arr[g+1]+=(arr[g]-h);
                arr[g-1]+=(h-1);
                arr[g]=0;
 
 
 
        }
        for(int i=1;i<=n;i++)
                cout<<arr[i]<<endl;
}