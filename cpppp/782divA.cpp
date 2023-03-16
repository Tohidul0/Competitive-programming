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

    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        int x=a/b;
        if(x==a)
        {
            for(int i=1; i<=n; i++)
            {
                if(i==(x/2)+1)
                    cout<<"B";
                else
                    cout<<"R";
            }
            cout<<endl;
        }

       /*else if(x==1)
        {
            int j=1;
            int l=1;
            for(int i=1; i<=n; i++)
            {
                if(j<=x)
                {
                    cout<<"R";
                    j++;
                }
                else
                {
                    if(l>b)
                        cout<<"R";
                    else
                        cout<<"B";
                    l++;
                    j=1;

                }
            }
            cout<<endl;*/
      //  }
        else
        {
            int j=1;
            int l=n/(b+1);
            l=l+1;
            for(int i=1; i<=n; i++)
            {
                if(i%l==0)
                        cout<<"B";
                else
                        cout<<"R";


            }
            cout<<endl;
        }
    }



}


