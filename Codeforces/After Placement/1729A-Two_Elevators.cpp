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
        int a,b,c;
        cin>>a>>b>>c;
        int time1=a-1;
        int time2=0;
        if(b>c){
            time2=b-1;
        }
        else{
            time2=abs(c-b)+c-1;
        }
        if(time1<time2){
            cout<<1<<endl;
        }
        else if(time1>time2){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
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