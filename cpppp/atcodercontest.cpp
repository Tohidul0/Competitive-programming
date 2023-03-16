#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[10000],n,a,b=0;
        set<int> s;
        cin>>n;
        for(int i=1;i<=n;i++)
                cin>>arr[i];
        cin>>a;
        while(b!=a)
        {
                b=a;
                s.insert(arr[a]);
                a=arr[a];



        }
        cout<<s.size();
}
