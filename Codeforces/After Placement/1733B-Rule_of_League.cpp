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
void printPattern(int temp, int x){
    int count=1;
    while (temp--)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << count << " ";
        }
        if(count==1){
            count++;
        }
        
        count += x;
    }
}


int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        int n,x,y;
        cin>>n>>x>>y;
        if(x==0 && y==0){
            cout<<-1<<endl;
        }
        else if(x>0&&y>0){
            cout<<-1<<endl;
        }
        else{
            // means either x of y is 0
            if(x==0){
                swap(x,y);
            }
            // means y=0
            if ((n - 1) % x == 0)
            {
                int temp = (n - 1) / x;
                printPattern(temp, x);
            }
            else
            {
                cout << -1;
            }
            cout << endl;
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