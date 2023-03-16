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
//#define pb push_back
#define ff first
#define ss second
int main()
{
        vector< pair<double,int> > ans;
        int n,t1,t2;
        double k;
        cin>>n>>t1>>t2>>k;
        for(int i=1;i<=n;i++)
        {
                double a,b,x,y;
                cin>>a>>b;

                        x=((b*t1)-(b*t1*(k/100))+a*t2);
                        y=(a*t1-(a*t1*(k/100))+b*t2);
                        double k=max(x,y);

                ans.push_back(make_pair(k,-i));

        }
        sort(ans.rbegin(),ans.rend());
        int z=ans.size()-1;
        for(int i=0;i<ans.size();i++)
        {
                cout<<-ans[i].second<<" "<<fixed<<setprecision(2)<<ans[i].first<<endl;

        }




}


