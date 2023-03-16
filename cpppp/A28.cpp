#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g=0,m;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        n=abs(s[0]-'a');
        m=26-n;
        if(n<m)
            g=g+n;
        else
            g=g+m;
        cout<<g<<endl;
    }
    else
    {

        n=abs(s[0]-'a');
        m=26-n;
        if(n<m)
            g=g+n;
        else
            g=g+m;

        for(int i=0; i<s.size()-1; i++)
        {



            n=abs(s[i]-s[i+1]);
            m=26-n;
            if(n<m)
                g=g+n;
            else
                g=g+m;




        }
        cout<<g<<endl;
    }
}
