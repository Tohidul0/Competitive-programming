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
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,a;
        cin>>n;
        vector<ll int> v;
        ll int sum=1,g=0;
        for(ll int i=1; i<=n; i++)
        {
            cin>>a;
            if(a<0)
                g++;
            v.pb(a);

        }
        sort(v.begin(),v.end());
        if(n==5)
        {
            for(int i=0; i<5; i++)
                sum=sum*v[i];
            cout<<sum<<endl;
            sum=0;
        }
        else
        {
            ll int x=v[0]*v[1]*v[2]*v[3]*v[n-1];
            ll int y=v[0]*v[1]*v[n-3]*v[n-2]*v[n-1];
            ll int z=v[n-5]*v[n-4]*v[n-3]*v[n-2]*v[n-1];

            cout<<max(x,max(y,z))<<endl;
        }


    }

}


