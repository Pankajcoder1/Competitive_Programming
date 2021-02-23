/*
  written by Pankaj Kumar.
  country:-INDIA
*/
#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       cin>>n;
       int *arr=new int[n];
       if(n==1)
       {
           cin>>arr[0];
           if(arr[0]%2==0)
           {
               cout<<1<<"\n"<<1<<endl;
           }
           else
           {
               cout<<-1<<endl;
           }
       }
       else
       {
           for(int k=0;k<n;k++)
           {
               cin>>arr[k];
           }
                if(arr[0]%2==0)
                {
                    cout<<1<<"\n"<<1<<endl;
                }
                else if(arr[1]%2==0)
                {
                    cout<<1<<"\n"<<2<<endl;
                }
                else if(arr[1]%2!=0)
                {
                    cout<<2<<"\n"<<1<<" "<<2<<endl;
                }
       }
    }
}