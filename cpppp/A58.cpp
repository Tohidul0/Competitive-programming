#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int m=1,k=1;
    cin>>a>>b;
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]>=a[i-1])
            m++;
        else
            break;
    }
    for(int i=1; i<b.size(); i++)
    {
        if(b[i]>=b[i-1])
            k++;
        else
            break;
    }
    if(m==1&&k==1)
        cout<<"-1"<<endl;
    else if(m==k)
        cout<<m<<endl;
    else
        cout<< max(m,k)<<endl;

}
