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
    string s;
    vs v;
    int m=0;
    int n=0;
    int l=0;
    for(int i=1; i<=3; i++)
    {
        cin>>s;
        if(s[1]=='<')
            v.pb(s[2]);
        else
            v.pb(s[0]);
        s.clear();
    }
    for(int j=0; j<v.size(); j++)
    {
        if(v[j]=='A')
            m++;
        else if(v[j]=='B')
            n++;
        else
            l++;
    }
    if(m==n&&n==l)
        cout<<"Impossible";
    else{
    // vector< pair<int ,char>> x;
    int arr[5];
    arr[0]=m;
    arr[1]=n;
    arr[2]=l;
    sort(arr,arr+3);
    for(int i=0; i<3; i++)
    {
        if(arr[i]==m)
            cout<<'A';
        else if(arr[i]==n)
            cout<<'B';
        else
            cout<<'C';
    }
    }
    cout<<endl;

}
