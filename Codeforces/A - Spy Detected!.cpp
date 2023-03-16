#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=0,q=0,n,a,arr[10000];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        for(int j=1; j<=a; j++)
        {
            cin>>arr[j];
 
        }
        if(a==1)
            cout<<"1"<<endl;
        else
        {
 
            for(int j=2; j<=a; j++)
            {
                if(arr[j]!=arr[1])
                {
                    for(int p=j+1; j<=a; p++)
                    {
                        if(arr[p]==arr[j]){
                            m=m;
                            //cout<<q<<endl;
                            break;
                        }
                        else{
                                q=j;
                                m++;
                                break;}
 
                    }
                    if(m==0)
                    {
                            q=1;
                            break;
                    }
 
                }
                else
                {
                        for(int p=j+1;p<=a;p++)
                        {
                                if(arr[j]!=arr[p])
                                {
                                        if(arr[j]!=arr[p+1])
                                                {
                                                        q=j;
                                                        break;
                                                }
                                        else
                                        {
                                                q=p;
                                                break;
                                        }
                                }
                        }
                }
                }
 
            cout<<q<<endl;
            q=0;
            m=0;
        }
 
        }
 
}