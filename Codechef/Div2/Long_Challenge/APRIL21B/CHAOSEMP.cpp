/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
ll Q,D;
string s;
const ll mini=-(2e18);
const ll maxo=2e18;

// partially solved
long long solve()
{
    // cout<<"mini is "<<mini<<endl;
    ll start=mini,end=maxo,y_start=mini,y_end=maxo;
    ll temp=1;
    while(start<=end){
        ll mid=(start+end)/2;
        if(temp==1){
            cout<<temp<<" "<<mid<<" "<<y_start<<endl;
        }
        else
            cout<<temp<<" "<<mid<<" "<<y_start<<" "<<mid<<" "<<y_end<<endl;
        cin>>s;
        char first_char=s[0];
        if(first_char=='X')
            temp=2;
        else if(s=="O")
            return 0;
        else if(first_char=='N'){
            start=mid+1;
        }
        else if(first_char=='P')
            end=mid-1;
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
    cin>>test>>Q>>D;

    // scanf("%lld",&test);
    while(test--)
    {
        cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/