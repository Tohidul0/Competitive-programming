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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,q;
        vector<ll int> arr;
        set< ll int> str;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            arr.pb(a);
            str.insert(a);
        }
        sort(arr.begin(),arr.end());
        if(arr.size()==1)
            cout<<arr[0]<<endl;
        else if(str.size()==1&& arr[0]>=0)
            cout<<arr[0]<<endl;
        else
        {
            if(arr[0]>=0)
            {
                int m=0,l;
                int j=0;


                int s=n-2;
                while(s--)
                {
                    l=m;
                    int p=arr[j];
                    for(; l<n; l++)
                    {
                        arr[l]=arr[l]-p;
                        //cout<<arr[l]<<" ";
                    }
                    m++;
                    j++;
                    //cout<<endl;

                }

                int x=abs(arr[n-1]-arr[n-2]);
                int y=min(arr[n-1],arr[n-2]);
                if(x>=y)
                    cout<<x<<endl;
                else
                    cout<<y<<endl;
            }
            else
            {
                int m=0,l;
                int j=0;


                int s=n-2;
                while(s--)
                {
                    l=m;
                    int p=arr[j];
                    for(; l<n; l++)
                    {
                        arr[l]=arr[l]-p;
                        //cout<<arr[l]<<" ";
                    }

                    m++;
                    if(j==0)
                        sort(arr.begin(),arr.end());
                    j++;
                    //cout<<endl;

                }

                int x=abs(arr[n-1]-arr[n-2]);
                int y=min(arr[n-1],arr[n-2]);
                if(x>=y)
                    cout<<x<<endl;
                else
                    cout<<y<<endl;
            }
        }

    }
}


