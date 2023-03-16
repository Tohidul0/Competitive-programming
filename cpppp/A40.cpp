#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        string a;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                cin>>a;
                if(a.size()<=10)
                        cout<<a<<endl;
                else
                {
                        int l=a.size();
                        cout<<a[0]<<a.size()-2<<a[l-1]<<endl;
                }
        }
}
