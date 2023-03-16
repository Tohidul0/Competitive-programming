#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100050];
    int n;
    cin>>n;
    int arr2[100050]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int k=n;
    for(int i=1;i<=n;i++)
    {
        arr2[arr[i]]=1;
        if(arr[i]!=k){
            cout<<endl;
        }
        else
        {
            while(arr2[k])
            {
                cout<<k<<" ";
                k--;
            }
            cout<<endl;
        }
        
    }
      
}