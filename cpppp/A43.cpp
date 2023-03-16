#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> x;
    vector<int> y;
    vector<int> z;
    int a[5900];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)
            x.push_back(i);
        else if(a[i]==2)
            y.push_back(i);
        else
            z.push_back(i);
    }
    int l,k=0;
    int q=x.size();
    int r=y.size();
    int t=z.size();
    int arr[10];
    arr[0]=q;
    arr[1]=r;
    arr[2]=t;
    sort(arr,arr+3);
    l=arr[0];
    if(l>0)
    {
        cout<<l<<endl;
        while(l--)
        {
            cout<<x[k]<<" "<<y[k]<<" "<<z[k]<<endl;
            k++;
        }
    }
    else
        cout<<"0"<<endl;
}

