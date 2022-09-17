/*
    written by Pankaj Kumar.
    country:-INDIA
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
    cin >> testCase;
    while (testCase--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<pair<char, int>> pos;
        int cost = 0;

        char mini = min({s[0], s[n - 1]});
        char maxo = max({s[0], s[n - 1]});
        for (int i = 1; i + 1 < n; i++)
        {
            if (s[i] >= mini && s[i] <= maxo)
            {
                pos.push_back({s[i], i + 1});
            }
        }
        sort(pos.begin(), pos.end());

        if (s[0] > s[n - 1])
        {
            reverse(pos.begin(), pos.end());
        }
        for(int i=0;i<pos.size();i++){
            if(i==0){
                cost+=abs(s[pos[i].second-1]-s[0]);
            }
            else{
                cost+=abs(s[pos[i].second-1]-s[pos[i-1].second-1]);
            }
        }
        if(pos.size()==0){
            cost+=abs(s[0]-s[n-1]);
        }
        else{
            cost+=abs(s[n-1]-s[pos[pos.size()-1].second-1]);
        }
        cout<<cost<<" "<<pos.size()+2<<endl;
        cout<<1<<" ";
        for(auto x:pos){
            cout<<x.second<<" ";
        }
        cout<<n<<endl;
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