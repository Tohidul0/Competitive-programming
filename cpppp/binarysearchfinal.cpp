//complexisty log2n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*#ifndef ONLINE_JUDGE
    preopen("input.txt","r",stdin);
    preopen("output.o","w",stdout);*/
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x : a)
        cin>>x;
    for(int i=0; i<k; i++)
    {
        int d;
        cin>>d;
    int g=0;
    int l=0,r=n-1;
    while(l<=r)
    {
            int m=(l+r)/2;
            if(a[m]==d){
                cout<<"YES"<<endl;
                g++;
                break;
            }
            else if(d>a[m])
            {
                    l=m+1;
            }
            else
                r=m-1;

    }
    if(g>0)
        cout<<"NO"<<endl;
    }
}
