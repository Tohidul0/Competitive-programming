#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[130],ans[130];
    cin>>n;
    int x;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        x=arr[i];
        ans[x]=i;

    }
    for(int i=1; i<=n; i++)
    {
        cout<<ans[i];
        if(i!=n)
            cout<<" ";
    }
    cout<<endl;
}
