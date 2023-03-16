#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[1005];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        sort(arr,arr+n);
         for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        int l=-1,r=n;
        int a,x;
        cin>>a;
        for(int i=1;i<=a;i++){
                        cin>>x;
        while(l<r-1)
        {
                int m=(l+r)/2;
                if(arr[m]>x)
                        r=m;
                else
                        l=m;

        }

        cout<<"upper bound is = "<<r<<endl;
        l=-1;
        r=n;
        }
        /*built in fuction for upper bound
        cout<<upper_bound(arr.begin(),a.end(),x)-a.begin();*/
}
