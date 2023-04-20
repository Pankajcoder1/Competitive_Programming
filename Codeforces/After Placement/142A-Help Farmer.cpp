/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n;
    cin>>n;
    long long mini = 0x3f3f3f3f3f3f3f3f, maxo = 0;
    // cout<<"mini "<<mini<<" "<<LONG_MAX<<" "<<mini-LONG_MAX<<endl;
    for(long long i=1;i*i*i<=n;i++){
        if(n%i==0){
            for(long long j=1;j*j<=(n/i);j++){
                if((n/i)%j==0){
                    long long k=(n/i)/j;
                    maxo = max(maxo, (i + 1) * (j + 2) * (k + 2));
                    maxo = max(maxo, (i + 2) * (j + 1) * (k + 2));
                    maxo = max(maxo, (i + 2) * (j + 2) * (k + 1));
                    mini = min(mini, (i + 1) * (j + 2) * (k + 2));
                    mini = min(mini, (i + 2) * (j + 1) * (k + 2));
                    mini = min(mini, (i + 2) * (j + 2) * (k + 1));
                }
            }
        }
    }
    cout<<mini-n<<" "<<maxo-n<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}