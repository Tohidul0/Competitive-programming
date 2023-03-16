#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,g=0;
    char s[40];
    cin>>n>>k;
    char a='a';
    for(int i=1; i<=k; i++)
    {

            s[i]=a;
            a++;
            g++;
    }
    for(int m=1,i=1;i<=n;i++)
    {
            cout<<s[m];

            if(m==g)
                m=1;
            else
                m++;

    }

    cout<<endl;
    return 0;
}
