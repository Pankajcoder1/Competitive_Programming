#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int, int> mp;
    cin>>n;
    
    vector<int> arr(n);
    vector<vector<int>> ans;
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    priority_queue<pair<int, int>> q;
    for (auto it : mp)
    {
        q.push({it.second, it.first});
    }
    
    while (q.size() > 2)
    {
        vector<pair<int, int>> v(3);
        for (int i = 0; i < 3; ++i)
        {
            v[i] = q.top();
            q.pop();
        }
        vector<int> pos;
        for (int k = 0; k < 3; ++k)
        {
            pos.push_back(v[k].second);
            v[k].first--;
            if (v[k].first){
                q.push(v[k]);
            }
        }
        sort(pos.rbegin(),pos.rend());
        ans.push_back(pos);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
    return 0;
}