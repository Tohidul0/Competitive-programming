#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,l,c=1;
    char x;
    char b[105];
    set<char> z;
    char s[105];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            x=s[i];
            b[i]=x;


        }

        reverse(b,b+n);
        //cout<<b<<endl;
        for(int j=0; j<n; j++)
        {

            if(b[j]==s[j])
            {
                c=1;
            }
            else{
                c=0;
                break;
            }
        }


        if(k==0||c==1)
            cout<<"1"<<endl;

        else
            cout<<"2"<<endl;



    }
}
