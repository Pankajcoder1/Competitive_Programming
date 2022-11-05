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
int flag=0;
int h,w;
vector<vector<char>> grid;
vector<vector<bool>> check;

void dfs(int i,int j,int count){
    if(i<0 || j<0 || i>=h || j>=w){
        return;
    }
    if(check[i][j]==true){
        return;
    }
    if(grid[i][j]=='#'){
        return;
    }
    if(grid[i][j]=='S' && count>0){
        flag+=(count>=4);
        return;
    }
    check[i][j]=true;
    dfs(i+1,j,count+1);
    dfs(i-1,j,count+1);
    dfs(i,j+1,count+1);
    dfs(i,j-1,count+1);

}

int solve()
{
    cin>>h>>w;
    int intialI = 0, intialJ = 0;

    grid.resize(h,vector<char>(w));
    check.resize(h,vector<bool>(w,false));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='S'){
                intialI = i;
                intialJ = j;
            }
        }
    }
    dfs(intialI+1,intialJ,1);
    dfs(intialI-1,intialJ,1);
    dfs(intialI,intialJ+1,1);
    dfs(intialI,intialJ-1,1);
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
int main()
{
    long long testCase;
    testCase = 1;

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
