#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,d=0,k=1;
    int arr[110];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        d+=arr[i];
        if(d>sum/2)
            break;
        else
            k++;
    }
    cout<<k<<endl;

}
