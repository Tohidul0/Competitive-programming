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

   int arr[110];
   int t,n,m,c;
   cin>>t;
   while(t--)
   {
         cin>>n;
         for(int i=1;i<=n;i++)
                cin>>arr[i];
         if(arr[1]==arr[2]||arr[1]==arr[3])
                m=arr[1];
         else if(arr[1]==arr[2]||arr[2]==arr[3])
                m=arr[2];
         else if(arr[1]==arr[3]||arr[2]==arr[3])
                m=arr[3];


        for(int i=1;i<=n;i++)
        {
                if(arr[i]!=m)
                {
                        c=i;
                        break;
                }
        }
        cout<<c<<endl;

   }


















}
