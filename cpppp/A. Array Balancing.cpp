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

    ll int t,g,h,sum=0;
    vector<ll int> a;
    vector<ll int> b;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         for(int i=1;i<=n;i++){
                cin>>g;
                a.pb(g);
         }
         for(int i=1;i<=n;i++){
                cin>>h;
                b.pb(h);
         }
         for(int i=0;i<n;i++){
                if(a[i]>b[i])
                        swap(a[i],b[i]);
         }
         for(int i=0;i<n-1;i++){
                g=abs(a[i]-a[i+1]);
                sum+=g;
                h=abs(b[i]-b[i+1]);
                sum+=h;
         }
         cout<<sum<<endl;
         a.clear();
         b.clear();
         sum =0;
    }





















}


