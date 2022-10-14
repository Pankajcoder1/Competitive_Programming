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
        vector<vector<char>> grid(8,vector<char>(8,'.'));
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                cin>>grid[i][j];
            }
        }
        bool done=false;
        // check all row
        for(int i=0;i<8;i++){
            bool flag=true;
            for(int j=0;j<8;j++){
                if(grid[i][j]!='R'){
                    flag=false;
                    break;
                }
            }
            if(flag){
                done=true;
                cout<<"R"<<endl;
                break;
            }
        }
        if(!done){
            for (int i = 0; i < 8; i++)
            {
                bool flag = true;
                for (int j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    done = true;
                    cout << "B" << endl;
                    break;
                }
            }
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