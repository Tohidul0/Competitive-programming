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
   int n,arr[100090],ans1[100050],ans2[100050];
   ll int eboro=0,fboro=0,l;
   cin>>n;
   for(int i=1,j=n ; i<=n;i++ ){
        cin>>arr[i];
   }
   for(int i=1,j=n ; i<=n;i++,j-- ){
        ans1[arr[i]]=i;
        ans2[arr[j]]=i;
   }

   int x;
   cin>>x;
   for(int i=1;i<=x;i++)
   {
           cin>>l;
           eboro+=ans1[l];
           fboro+=ans2[l];
   }
   cout<<eboro<<" "<<fboro<<endl;

}


