#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k=0,x,r,y=0,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++ )
                cin>>arr[i];
        for(int i=1;i<=n;i++)
        {
                if(arr[i]!=i)
                {
                        k++;
                        //x=i;


                for(int j=i+1;j<=n;j++)
                {
                        if(arr[j]==i)
                        {
                                /*arr[i]=i;
                                arr[j]=k;
                                break;*/
                                x=j;
                                r=j;
                                y++;
                                break;
                        }
                }
                }
                if(y>0){
                if(x%2==0||x==n-1){
                for(i;i<=x/2;i++)
                {
                        temp=arr[i];
                        arr[i]=arr[r];
                        arr[r]=temp;

                        r--;
                }
                }
                else
                {
                  for(i;i<=(x/2)+1;i++)
                {
                        temp=arr[i];
                        arr[i]=arr[r];
                        arr[r]=temp;

                        r--;
                }
                }
                }
                y=0;
                if(k>0)
                        break;
        }
        for(int j=1;j<=n;j++)
                cout<<arr[j]<<" ";
        cout<<endl;
        k=0;

    }
}
