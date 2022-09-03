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
        int n,m;
        cin>>n>>m;
        vector<string> grid(n);
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        vector<vector<int>> number(n,vector<int>(m,0));
        int count=1,flag=0;
        for(int i=0;i<n;i++){
            cin>>grid[i];
        }

        // marking L shape
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='*' && visited[i][j]==false){
                    if(i+1<n && j+1<m && grid[i+1][j]=='*' && grid[i][j+1]=='*'){
                        visited[i][j]=true;
                        visited[i+1][j]=true;
                        visited[i][j+1]=true;
                        number[i][j]=count;
                        number[i+1][j]=count;
                        number[i][j+1]=count;
                        count++;
                    }
                    else if(i+1<n && j-1>=0 && grid[i+1][j]=='*' && grid[i][j-1]=='*'){
                        visited[i][j]=true;
                        visited[i+1][j]=true;
                        visited[i][j-1]=true;
                        number[i][j]=count;
                        number[i+1][j]=count;
                        number[i][j-1]=count;
                        count++;
                    }
                    else if(i-1>=0 && j+1<m && grid[i-1][j]=='*' && grid[i][j+1]=='*'){
                        visited[i][j]=true;
                        visited[i-1][j]=true;
                        visited[i][j+1]=true;
                        number[i][j]=count;
                        number[i-1][j]=count;
                        number[i][j+1]=count;
                        count++;
                    }
                    else if(i-1>=0 && j-1>=0 && grid[i-1][j]=='*' && grid[i][j-1]=='*'){
                        visited[i][j]=true;
                        visited[i-1][j]=true;
                        visited[i][j-1]=true;
                        number[i][j]=count;
                        number[i-1][j]=count;
                        number[i][j-1]=count;
                        count++;
                    }
                }
            }
        }

        // checking validity
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='*' && visited[i][j]==false){
                    flag++;
                    break;
                }
                else if(grid[i][j]=='*'){
                    if(j-1>=0 && number[i][j-1]!=0 && number[i][j-1]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(j+1<m && number[i][j+1]!=0 && number[i][j+1]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i-1>=0 && number[i-1][j]!=0 && number[i-1][j]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i+1<n && number[i+1][j]!=0 && number[i+1][j]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i+1<n && j+1<m && number[i+1][j+1]!=0 && number[i+1][j+1]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i+1<n && j-1>=0 && number[i+1][j-1]!=0 && number[i+1][j-1]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i-1>=0 && j+1<m && number[i-1][j+1]!=0 && number[i-1][j+1]!=number[i][j]){
                        flag++;
                        break;
                    }
                    if(i-1>=0 && j-1>=0 && number[i-1][j-1]!=0 && number[i-1][j-1]!=number[i][j]){
                        flag++;
                        break;
                    }   
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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