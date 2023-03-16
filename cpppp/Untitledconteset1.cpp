#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m=0;
        cin>>n;
         int a,b,c;
        for(int i=1;i<=n;i++)
        {
                cin>>a>>b>>c;
                if(((a+c)%2==0)&&(((a+c)/2)==b))
                        cout<<"0"<<endl;
                while((((a+c)/2)!=b)||((((a+c)/2)==b)&&(((a+c)%2!=0)))){
                        if(a+c/2<b)
                        {
                                a++;b--;
                                if(((a+c)%2==0)&&(((a+c)/2)==b))
                                {
                                        cout<<"0"<<endl;
                                        m++;
                                        break;
                                }
                                else if((a+c)/2==b)
                                {
                                        if((a+c)%2!=0){
                                        cout<<"1"<<endl;
                                        break;
                                        }

                                }
                        }
                        else if(a+c/2>b)
                        {

                                a--;b++;
                               if(((a+c)%2==0)&&((a+c)/2==b))
                                {
                                        cout<<"0"<<endl;
                                        m++;
                                        break;
                                }
                                else if((a+c)/2==b)
                                {
                                        if((a+c)%2!=0){
                                        cout<<"1"<<endl;
                                        break;
                                        }

                                }


                        }
                        m=0;
                }


        }
}
