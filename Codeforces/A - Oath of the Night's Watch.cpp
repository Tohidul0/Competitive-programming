#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int arr[100500];
    int n;
    int g=0;
    cin>>n;
    for(long int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(long int i=1; i<n; i++)
    {
        if(arr[i]>arr[0]&&arr[i]<arr[n-1])
            g++;
    }
    cout<<g<<endl;
}