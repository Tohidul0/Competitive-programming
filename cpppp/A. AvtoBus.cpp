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
        unsigned long long int a,b,c,ans;
        int x=0;
        cin>>a;
        if(a%6==0)
            b=(a/6);
        else if(a%6!=0)
        {
            ans=a%6;
            if(ans%4==0)
            {
                b=(a/6)+(ans/4);
            }
            else
                x++;
        }

        if(a%4==0)
            c=(a/4);
        else if(a%4!=0)
        {
            ans=a%4;
            if(ans%6==0)
            {
                c=(a/4)+(ans/6);
            }
            else
                x++;
        }


        if(x>0)
            cout<<"-1"<<endl;
        else
            cout<<b<<" "<<c<<endl;


    }
}



