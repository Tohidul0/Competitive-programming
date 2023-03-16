#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        cin>>s;
        int a,arr[105],j=0;
        a=s.size();
        if(a==1)
                cout<<s[0];
        else{
        for(int i=0;i<a;i++)
        {
                if(i%2==0)
                {
                        if(s[i]=='1'){
                                arr[j]=1;
                                j++;
                        }
                        else if(s[i]=='2'){
                                arr[j]=2;
                                j++;
                        }
                        else
                        {
                                arr[j]=3;
                                j++;
                        }
 
                }
 
        }
        sort(arr,arr+j);
        int m=0;
        for(int i=0;i<a;i++)
        {
                if(i%2==0)
                {
                        cout<<arr[m];
                        m++;
                }
                else
                {
                        cout<<'+';
                }
        }
        }
        cout<<endl;
}