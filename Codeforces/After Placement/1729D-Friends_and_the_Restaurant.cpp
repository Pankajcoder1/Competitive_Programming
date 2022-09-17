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
        vector<int> x(n),y(n);

        vector<int> pos,neg,zero;
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
            int temp=y[i]-x[i];
            if(temp<0){
                neg.push_back(temp);
            }
            else if(temp==0){
                zero.push_back(temp);
            }
            else{
                pos.push_back(temp);
            }
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        int days=0;
        int i=0,j=neg.size()-1;
        int temp=0;
        while(i<pos.size() && j>=0){
            if(pos[i]+neg[j]>=0){
                temp++;
                days++;
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        
        days+=(zero.size()+pos.size()-temp)/2;
        cout<<days<<endl;
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