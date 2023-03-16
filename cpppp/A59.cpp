#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,k=0;
    string s,z;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>s[i];
    z[0]=s[n];
    c=z[0];
    for(int j=1, i=n-1;i>0;i--){

       if(c>s[i]){
        z[j]=s[i];
        j++;
       }
       else
       {
           c=s[i];
           z[j]=' ';
           z[j+1]=s[i];
           j=j+2;
           k++;

       }

    }
    for(int i=0;i<n+k;i++)
    cout<<z[i];


}
