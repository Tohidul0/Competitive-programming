#include<bits/stdc++.h>
using namespace std;
int main()
{
        string a;
        int m=0;
        cin>>a;
        for(int i=0; i<a.size(); i++)
        {
                int j;
                for( j=0;j<i;j++)
                {
                        if(a[i]==a[j])
                                break;
                }
                if(i==j)
                        m++;
        }
      if(m%2==0)
        cout<<"CHAT WITH HER!"<<endl;
      else
        cout<<"IGNORE HIM!"<<endl;
}