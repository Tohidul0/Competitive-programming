//             Bismillahir Rahmanir Rahim                    //
//             Mohammad Tohidul Alam Akil                    //
//                Dept. of CSE,IIUC.                         //
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c,d,k;
    int g;
    int ans=0;
    cin>>n>>a;
    int i=a-1;
    vector < pair<int,int> > v;
    while(a--)
    {
        cin>>c>>d;
        v.push_back(make_pair(d,c));//push vector element in pair, first is key, second is element

    }
    sort(v.begin(),v.end());// always key is sort
    //for(int i=0;i<f;i++)
       // cout<<v[i].second<< " "<<v[i].first<<endl;
    while(n>0)
    {

        if(v[i].second<=n)
            k=v[i].second;
        else
            k=n;
        int l=v[i].first;
       // cout<<l<<" "<<k<<endl;
        g=k*l;
        ans=ans+g;
        n=n-k;
        i--;
        if(i<0)
                break;
    }
    cout<<ans<<endl;
}
