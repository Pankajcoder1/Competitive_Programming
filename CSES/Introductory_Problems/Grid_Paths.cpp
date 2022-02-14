/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
using namespace std;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
const int n = 7;
const int total_steps=48;
bool visited[n][n];
int reserved[49];
string path;


void move(int row, int col, int &ans, int &steps)
{
    if (row == n - 1 && col == 0)
    {
        if(steps==total_steps){
            ans++;
        }
        return ;
    }

    // if you hit a wall or a path (can only go left or right); return
    if (((row + 1 == n || (visited[row - 1][col] && visited[row + 1][col])) && col - 1 >= 0 && col + 1 < n && !visited[row][col - 1] && !visited[row][col + 1])){
        return ;
    }
    if(((col + 1 == n || (visited[row][col - 1] && visited[row][col + 1])) && row - 1 >= 0 && row + 1 < n && !visited[row - 1][col] && !visited[row + 1][col])){
        return ;
    }
    if(((row == 0 || (visited[row + 1][col] && visited[row - 1][col])) && col - 1 >= 0 && col + 1 < n && !visited[row][col - 1] && !visited[row][col + 1])){
        return ;
    }
    if(((col == 0 || (visited[row][col + 1] && visited[row][col - 1])) && row - 1 >= 0 && row + 1 < n && !visited[row - 1][col] && !visited[row + 1][col])){
        return;
    }

    visited[row][col] = true;

    if (path[steps]!='?')
    {
        if(path[steps]=='U'){
            if (row - 1 >= 0)
            {
                if (!visited[row - 1][col])
                {
                    steps++;
                    move(row - 1, col, ans, steps);
                    steps--;
                }
            }
        }
        else if(path[steps]=='R'){
            if (col + 1 < n)
            {
                if (!visited[row][col + 1])
                {
                    steps++;
                    move(row, col + 1, ans, steps);
                    steps--;
                }
            }
        }

        else if(path[steps]=='D'){
            if (row + 1 < n)
            {
                if (!visited[row + 1][col])
                {
                    steps++;
                    move(row + 1, col, ans, steps);
                    steps--;
                }
            }
        }

        else if(path[steps]=='L'){
            if (col - 1 >= 0)
            {
                if (!visited[row][col - 1])
                {
                    steps++;
                    move(row, col - 1, ans, steps);
                    steps--;
                }
            }
        }
    }
    else{
        // move down
        if (row + 1 < n)
        {
            if (!visited[row + 1][col])
            {
                steps++;
                move(row + 1, col, ans, steps);
                steps--;
            }
        }

        // move right
        if (col + 1 < n)
        {
            if (!visited[row][col + 1])
            {
                steps++;
                move(row, col + 1, ans, steps);
                steps--;
            }
        }

        // move up
        if (row - 1 >= 0)
        {
            if (!visited[row - 1][col])
            {
                steps++;
                move(row - 1, col, ans, steps);
                steps--;
            }
        }

        // move left
        if (col - 1 >= 0)
        {
            if (!visited[row][col - 1])
            {
                steps++;
                move(row, col - 1, ans, steps);
                steps--;
            }
        }
        // visited[r][c] = false;
    }
    visited[row][col] = false;
}


int main()
{
    cin >> path;
    for (int i = 0; i < path.length(); i++)
    {
        if (path[i] == '?')
            reserved[i] = -1;
        else if (path[i] == 'U')
            reserved[i] = 0;
        else if (path[i] == 'R')
            reserved[i] = 1;
        else if (path[i] == 'D')
            reserved[i] = 2;
        else if (path[i] == 'L')
            reserved[i] = 3;
    }
    int ans = 0, steps = 0;
    move(0, 0, ans, steps);
    cout << ans<<endl;
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