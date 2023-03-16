#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g,h,k,l,p,q;
    cin>>n;
    long int arr[100000];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    vector<long int> x;
    for(long int j=1; j<=n; j++)
    {
        if(j==1)
        {
            if(arr[j]<0&&arr[j+1]<0||arr[j]>0&&arr[j+1]>0)
                g=abs(abs(arr[j])-abs(arr[j+1]));
            else
                g=abs(abs(arr[j])+abs(arr[j+1]));
 
 
 
            if(arr[j]<0&&arr[n]<0||arr[j]>0&&arr[n]>0)
                h=abs(abs(arr[j])-abs(arr[n]));
            else
                h=abs(abs(arr[j])+abs(arr[n]));
        }
        else if(n==2)
        {
            if(arr[j]<0&&arr[j-1]<0||arr[j]>0&&arr[j-1]>0)
                g=abs(abs(arr[j])-abs(arr[j-1]));
            else
                g=abs(abs(arr[j])+abs(arr[j-1]));
 
 
 
            if((arr[1]<0&&arr[n]<0)||(arr[1]>0&&arr[n]>0))
                h=abs(abs(arr[j])-abs(arr[j-1]));
            else
            {
                h=abs(abs(arr[j])+abs(arr[j-1]));
            }
        }
        else
        {
            if(arr[j]<0&&arr[j+1]<0||arr[j]>0&&arr[j+1]>0)
            {
                k=abs(abs(arr[j])-abs(arr[j+1]));
            }
            else
            {
                k=abs(abs(arr[j])+abs(arr[j+1]));
            }
 
 
 
            if(arr[j]<0&&arr[j-1]<0||arr[j]>0&&arr[j-1]>0)
                l=abs(abs(arr[j])-abs(arr[j-1]));
            else
                l=abs(abs(arr[j])+abs(arr[j-1]));
 
            if(k<l)
                g=k;
            else
                g=l;
 
 
            if(arr[j]<0&&arr[1]<0||arr[j]>0&&arr[1]>0)
            {
                p=abs(abs(arr[j])-abs(arr[1]));
            }
            else
            {
                p=abs(abs(arr[j])+abs(arr[1]));
                q=abs(abs(arr[j])+abs(arr[n]));
            }
            if(arr[j]<0&&arr[n]<0||arr[j]>0&&arr[n]>0)
                q=abs(abs(arr[j])-abs(arr[n]));
            else
                q=abs(abs(arr[j])+abs(arr[n]));
 
            if(p>q)
                h=p;
            else
                h=q;
        }
        cout<<g<<" "<<h<<endl;
 
    }
}
 