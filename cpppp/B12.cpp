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
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second
int main()
{

string s;
cin>>s;
ll int sum=0;
int k=0;
ll int n=s.size();
if(s=="0")
        cout<<"0"<<endl;
else{
while(n>1){
for(ll int i=0;i<n;i++)
{
        sum=sum+(s[i]-48);
}

s = to_string(sum); // kaj korthese online compiler ee,,   akta intiger number ke direct string e convert kora,,,,ethe ager sting vanish hoie jabe
n=s.size();
k++;


}
cout<<k<<endl;
}



}
