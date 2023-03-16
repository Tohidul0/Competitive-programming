#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[105];
    cin>>n;
    int a;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        for(int j=0; j<a; j++)
            cin>>s[j];
        if(a==1)
            cout<<"YES"<<endl;
        else if(a==2)
        {
            if(s[0]==s[1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
 
        }
        else
        cout<<"NO"<<endl;
 
    }
}