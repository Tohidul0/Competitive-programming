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
    int t,m,n,s=0;
    char str[110][110];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>str[i][j];
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {

                if(i!=n && j!=m)
                {
                    if(str[i][j]=='1' && str[i+1][j+1]=='1')
                    {
                        if(str[i][j+1]=='1' && str[i+1][j]=='0' )
                        {
                            s++;
                            break;
                        }

                        if(str[i][j+1]=='0' && str[i+1][j]=='1' )
                        {
                            s++;
                            break;
                        }

                    }
                }


                 if(j!=1 && i!=n)
                {
                    if(str[i][j]=='1' && str[i+1][j-1]=='1')
                    {
                        if(str[i][j-1]=='1' && str[i+1][j]=='0' )
                        {
                            s++;
                            break;
                        }

                        if(str[i][j-1]=='0' && str[i+1][j]=='1' )
                        {
                            s++;
                            break;
                        }

                    }
                }




            }
        if(s>0)
            cout<<"NO"<<endl;
        else
            YES;
        s=0;

    }

}



