
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
    ll int n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vii v;
        for(ll int i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back(make_pair(a,i)) ;
        }
        sort(v.begin(),v.end());
        cout<<v[0].second<<" "<<v[n-1].second<<endl;
        v.clear();
    }

}



