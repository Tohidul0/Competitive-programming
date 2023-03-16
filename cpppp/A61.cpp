#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,g=0;
    cin>>n;
    int arr[200]= {0};
    char str[105];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
        int l=str[i];
        arr[l]=1;
        if(str[i]>=97&&str[i]<=122)
            arr[l-32]=1;
        else
            arr[l+32]=1;
    }

    for(int j=97; j<=122; j++)
    {
        if(arr[j]==0)
        {
            m++;
            break;
        }
    }
    for(int j=65; j<=90; j++)
    {
        if(arr[j]==0)
        {
            g++;
            break;
        }
    }
    if(m==0&g==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
