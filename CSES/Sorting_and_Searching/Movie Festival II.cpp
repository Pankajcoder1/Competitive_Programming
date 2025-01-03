/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k,ans=0;
    cin>>n>>k;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    multiset<int> end_time;
    for(int i=0;i<k;i++){
        end_time.insert(0);
    }

    for(int i=0;i<n;i++){
        // auto it = upper_bound(end_time.begin(),end_time.end(),v[i].second);  // O(N) complexity
        auto it = end_time.upper_bound(v[i].second);  // O(log(N)) complexity
        if(it==end_time.begin()){
            continue;
            // no one if free
        }
        end_time.erase(--it);
        ans++;
        end_time.insert(v[i].first);
    }

    cout<<ans<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    // cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
