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
    char str[110][110];
    int m=0;
    int ans=0;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>str[i][j];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(str[i][j]=='C')
                m++;
        }
        ans+=((m*(m-1))/2);
        m=0;
    }
    for(int j=1; j<=n; j++)
    {
        for(int i=1; i<=n; i++)
        {
            if(str[i][j]=='C')
                m++;
        }
        ans+=((m*(m-1))/2);
        m=0;
    }
    cout<<ans<<endl;
}


