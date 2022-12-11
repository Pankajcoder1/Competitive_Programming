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

int solve()
{
    string s;
    cin>>s;
    if(s.size()==8){
        if(s[0]>='A' && s[0]<='Z' && s[7]>='A' && s[7]<='Z' && s[1]>='1' && s[1]<='9' && s[2]>='0' && s[2]<='9' && s[3]>='0' && s[3]<='9' && s[4]>='0' && s[4]<='9' && s[5]>='0' && s[5]<='9' && s[6]>='0' && s[6]<='9'){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
int main()
{
    long long testCase = 1;
    while (testCase--)
    {
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
