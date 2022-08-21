/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        // for(auto x:v){
        //     cout<<x.first<<" and "<<x.second<<endl;
        // }
        int ans=0;
        if(v[1].second>v[0].second){
            if(v[n-1].second>v[n-2].second){
                ans+=abs(v[0].first-v[n-1].first);
                ans+=abs(v[1].first-v[n-2].first);
            }
            else{
                ans+=abs(v[0].first-v[n-2].first);
                ans+=abs(v[1].first-v[n-1].first);
            }
        }
        else{
            if(v[n-1].second>v[n-2].second){
                ans+=abs(v[0].first-v[n-2].first);
                ans+=abs(v[1].first-v[n-1].first);
            }
            else{
                ans+=abs(v[0].first-v[n-1].first);
                ans+=abs(v[1].first-v[n-2].first);
            }
        }
        cout<<ans<<endl;
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