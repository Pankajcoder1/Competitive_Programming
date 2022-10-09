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
    cin>>testCase;
    while(testCase--){
        long long l,r;
        cin>>l>>r;
        long long ans=0;

        // finding for k^2
        // for l
        long long first=1,second=1e9;
        long long l1=0;
        // find closest square root value
        while(first<=second){
            long long mid=(first+second)/2;
            if(mid*mid>=l){
                l1=mid;
                second=mid-1;
            }
            else{
                first=mid+1;
            }
        }
        
        // cout<<"l1 is "<<l1<<endl;
        first = 1, second = 1e9;
        // finding smallest sqaure root value
        long long r1=0;
        while(first<=second){
            long long mid=(first+second)/2;
            if(mid*mid<=r){
                r1=mid;
                first=mid+1;
            }
            else{
                second=mid-1;
            }
        }
        // cout<<"r1 is "<<r1<<endl;
        ans+=(r1-l1+1);

        first = 1, second = 1e9;
        long long l2=0;
        while (first <= second)
        {
            long long mid = (first + second) / 2;
            if (mid * (mid+1) >= l)
            {
                l2 = mid;
                second = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
        cout<<"l2 is "<<l2<<endl;

        first = 1, second = 1e9;
        long long r2 = 0;
        while (first <= second)
        {
            long long mid = (first + second) / 2;
            if (mid * (mid+1)<=r)
            {
                r2 = mid;
                first=mid+1;
            }
            else
            {
                second = mid - 1;
            }
        }
        cout << "r2 is " << r2 << endl;
        ans += (r2 - l2 + 1);

        first = 1, second = 1e9;
        long long l3 = 0;
        while (first <= second)
        {
            long long mid = (first + second) / 2;
            if (mid * (mid+2) >= l)
            {
                l3 = mid;
                second = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
        // cout << "l3 is " << l3 << endl;

        first = 1, second = 1e9;
        long long r3 = 0;
        while (first <= second)
        {
            long long mid = (first + second) / 2;
            if (mid * (mid+2) <=r)
            {
                r3 = mid;
                first=mid+1;
            }
            else
            {
                second = mid - 1;
            }
        }
        // cout<<"r3 is "<<r3<<endl;
        ans += (r3 - l3 + 1);
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
