#include<bits/stdc++.h>
using namespace std;
int main()
{
        int m=0,arr[10];
        for(int i=1;i<=4;i++)
                cin>>arr[i];
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
                if(s[i]=='1')
                        m=m+arr[1];
                else if(s[i]=='2')
                        m=m+arr[2];
                else if(s[i]=='3')
                        m=m+arr[3];
                else if(s[i]=='4')
                        m=m+arr[4];
        }
        cout<<m<<endl;
}
