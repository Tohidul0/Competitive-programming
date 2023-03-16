#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
        int arr[10],m=0;
        for(int i=1;i<=4;i++)
                cin>>arr[i];
        for(int i=1;i<=4;i++)
        {
                for(int j=i+1;j<=4;j++)
                {
                        if(arr[i]==arr[j])
                                m++;
                }
        }
        cout<<m;

}
