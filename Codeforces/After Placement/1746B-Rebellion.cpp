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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int first=-1,second=-1;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                first=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==0){
                second=i;
                break;
            }
        }
        if(first==-1 || second==-1){
            cout<<0<<endl;
        }
        else{
            int count=0;
            while(second>first){

                while(v[first]==0){
                    first++;
                }
                while(v[second]==1){
                    second--;
                }
                if(second>first){
                    count++;
                    first++;
                    second--;
                }
            }
            cout<<count<<endl; 
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
