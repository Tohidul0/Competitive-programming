#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[1050],n,g=1,m=0;
        int ans[10050];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>arr[i];
        }
        arr[n+1]=100000;
        arr[0]=100000;
        for(int i=1;i<=n;i++)
        {
                for(int j=i;j<=n;j++)
                {
                        if(arr[j]>=arr[j+1])
                                g++;
                        else
                                break;
                }
                for(int j=i;j>0;j--)
                {
                        if(arr[j]>=arr[j-1])
                                g++;
                        else
                                break;
                }
                ans[m]=g;
                m++;
                g=1;
        }
        int k=m-1;
        /*for(int i=0;i<=k;i++)
                cout<<ans[i]<<" ";
                cout<<endl;*/
        sort(ans,ans+k+1);
        /*for(int i=0;i<=k;i++)
                cout<<ans[i]<<" ";*/
                cout<<ans[k]<<endl;
}
