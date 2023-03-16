#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if((a+b+c)%3==0)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
}
