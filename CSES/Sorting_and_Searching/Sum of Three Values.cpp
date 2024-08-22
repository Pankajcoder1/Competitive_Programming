/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,x,temp;
    cin>>n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>temp;
        // storing 0 based index
        v[i]={temp,i};
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int req_sum=x-v[i].first;
        int start = i+1, end = n - 1;
        while (end > start)
        {
            temp = v[start].first + v[end].first;
            if (temp == req_sum)
            {
                cout << v[i].second+1 <<" " << v[start].second + 1 << " " << v[end].second + 1 << endl;
                return 0;
            }
            if (temp < req_sum)
                start++;
            else
                end--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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