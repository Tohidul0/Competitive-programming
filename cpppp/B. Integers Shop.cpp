//             Bismillahir Rahmanir Rahim                    //
//             Mohammad Tohidul Alam Akil                    //
//                Dept. of CSE,IIUC.                         //
#include<bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl
#define _1 cout << -1 << endl;

#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vs vector<char>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
            ll int n,l,r,c,x,y,z;
            cin>>n;
            for(ll int i=1;i<=n;i++)
            {
                  cin>>l>>r>>c;
                  if(i==1)
                  {
                          cout<<c<<endl;
                          x=l;
                          y=r;
                          z=c;

                  }
                  if(l==x&&r==y)
                        cout<<z<<endl;
                  else
                  {
                          if(x<l)
                                x=x;
                          else
                                x=l;
                          if(y>r)
                                y=y;
                          else
                                y=r;,
                  }






















            }
    }
}



