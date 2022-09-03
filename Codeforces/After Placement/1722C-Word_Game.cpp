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
        int n;
        cin >> n;
        string s;
        vector<vector<string>> v(3);
        vector<int> ans(3,0);
        map<string, int> m;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s;
                v[i].push_back(s);
                m[s]++;
            }
        }
        for(int i=0;i<3;i++){
            for(auto x:v[i]){
                if(m[x]==1){
                    ans[i]+=3;
                }
                else if(m[x]==2){
                    ans[i]+=1;
                }
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
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