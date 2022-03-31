/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"Yes"<<endl; 
#define no cout<<"No"<<endl;
ll a[1001][1001],b[1001][1001],temp[1001][1001];

ll check(ll r,ll c){
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            if(a[i][j]!=b[i][j])
                return 0;
        }
    }
    return 1;
}

long long solve()
{
    ll r,c,x;
    cin>>r>>c>>x;
    // ll a[r+1][c+1],b[r+1][c+1],temp[r+1][c+1];
    ll sum_a=0,sum_b=0;
    for(ll i=0;i<r;i++){
    	for(ll j=0;j<c;j++){
    		cin>>a[i][j];
    	}
    }

   	for(ll i=0;i<r;i++){
    	for(ll j=0;j<c;j++){
    		cin>>b[i][j];
    	}
    }

    for(ll i=0;i<r;i++){
    	for(ll j=0;j<c;j++){
            temp[i][j]=a[i][j]-b[i][j];
    		sum_b+=b[i][j];
            sum_a+=a[i][j];
    	}
    }

    if(x==2){
        ll temp_sum=0;
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                ll factor=1;
                if((r+c-i-j)%2==0)
                    factor=-1;
                if(!(i==r&&j==c))
                    temp_sum+=factor*temp[i][j];
            }
        }
        if(temp[r][c]==temp_sum)
            yes
        else
            no
    }
    else{
        if(r<x&&c<x){
            if(check(r,c))
                yes
            else
                no
        }
        else if(r<x){
            for(ll i=0;i<r;i++){
                for(ll j=0;j<=c-x;j++){
                    if(a[i][j]!=b[i][j]){
                        ll diff=b[i][j]-a[i][j];
                        a[i][j]+=diff;
                        ll k=1;
                        while(k<x){
                            a[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(r,c))
                yes
            else
                no
        }
        else if(c<x){
            for(ll i=0;i<c;i++){
                for(ll j=0;j<=r-x;j++){
                    if(a[j][i]!=b[j][i]){
                        ll diff=b[j][i]-a[j][i];
                        a[j][i]+=diff;
                        ll k=1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(r,c))
                yes
            else
                no
        }
        else if(c>=x&&r>=x){
            for(ll i=0;i<r;i++){
                for(ll j=0;j<=c-x;j++){
                    if(a[i][j]!=b[i][j]){
                        ll diff=b[i][j]-a[i][j];
                        a[i][j]+=diff;
                        ll k=1;
                        while(k<x){
                            a[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }

            for(ll i=0;i<c;i++){
                for(ll j=0;j<(r-x+1);j++){
                    if(a[j][i]!=b[j][i]){
                        ll diff=b[j][i]-a[j][i];
                        a[j][i]+=diff;
                        ll k=1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(check(r,c))
                yes
            else
                no
        }
    }

    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    // scanf("%lld",&test);
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/