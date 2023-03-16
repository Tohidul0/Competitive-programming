#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int arr[100000];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    vector<long int> x;
    for(long int j=1; j<=n; j++)
    {
        for(long int k=1; k<=n; k++)
        {
            x.push_back(abs(arr[j]-arr[k]));
        }
        sort(x.begin(),x.end());
        long int h=x.size()-1;
        cout<<x[1]<<" "<<x[h]<<endl;
        x.clear();

    }
}
