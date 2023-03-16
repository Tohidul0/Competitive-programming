//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[305][305];
    int n,m=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cin>>str[i][j];
    }
    char x=str[1][1];
    char y=str[1][2];
    int l=n;
    for(int i=1; i<=n; i++)
    {
        if(str[i][i]!=x)
            m++;
        if(str[i][l]!=x)
            m++;
        if(m>0)
            break;
        for(int j=1; j<=n; j++)
        {
            if(j==i||j==l)
                m=m;
            else
            {
                if(str[i][j]!=y)
                {
                    m++;
                    break;
                }
            }

        }
        l--;
    }
    if(m>0||x==y)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
