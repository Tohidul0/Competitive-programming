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
    set<int> pure;
    int n,m;
    cin>>n;
    for(int j=1;j<=2;j++){
                cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
        pure.insert(arr[i]);
    }

    }
    if(pure.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    cout<<endl;


}


