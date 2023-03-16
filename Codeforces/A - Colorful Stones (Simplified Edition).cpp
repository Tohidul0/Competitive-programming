#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s1,s2;
        int a=1,j=0,k;
        cin>>s1>>s2;
        for(int i=0;i<s2.size();i++)
        {
            for( k=j;k<s1.size();)
            {
            
                if(s1[k]==s2[i])
                {
                    a++;
                    j++;
                    break;
                }
                else{
                 break;
                }
            }
        
        }
        cout<<a<<endl;
 
}